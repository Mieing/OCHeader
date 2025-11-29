@class NSArray, NSNumber, NSString;

@interface RTVVoipRingToneHistoryListResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *mc_list;
@property (retain, nonatomic) NSArray *music_list;
@property (retain, nonatomic) NSArray *media_list;
@property (retain, nonatomic) NSArray *playlistMusics;
@property (retain, nonatomic) NSArray *musicList;
@property (retain, nonatomic) NSArray *mcList;
@property (retain, nonatomic) NSNumber *errCode;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *errTips;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) NSNumber *musicType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
