@class NSString, NSMutableDictionary;

@interface TIMXPBNParticipantMinIndex : GPBMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL hasUserId;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL hasSecUid;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) long long indexV2;
@property (nonatomic) BOOL hasIndexV2;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
