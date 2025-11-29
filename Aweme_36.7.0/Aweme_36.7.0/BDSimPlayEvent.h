@class NSString, NSDictionary, NSError, NSNumber;

@interface BDSimPlayEvent : NSObject <BDSimPlayEventImpl>

@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long subEventType;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *URL;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *currentPlaybackTime;
@property (retain, nonatomic) NSNumber *totalPlaybackTime;
@property (retain, nonatomic) NSNumber *prepareToPlayDuration;
@property (nonatomic) long long blockType;
@property (retain, nonatomic) NSString *end_type;
@property (retain, nonatomic) NSString *block_action_type;
@property (copy, nonatomic) NSDictionary *customFields;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) NSDictionary *playEventMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(long long)a0 subEventType:(long long)a1;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
