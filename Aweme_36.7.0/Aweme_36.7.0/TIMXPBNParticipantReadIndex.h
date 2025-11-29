@class NSString, NSMutableDictionary;

@interface TIMXPBNParticipantReadIndex : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL hasSecUid;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) long long indexV2;
@property (nonatomic) BOOL hasIndexV2;
@property (nonatomic) long long indexMin;
@property (nonatomic) BOOL hasIndexMin;
@property (nonatomic) long long groupIndex;
@property (nonatomic) BOOL hasGroupIndex;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

- (long long)index;
- (long long)userId;

@end
