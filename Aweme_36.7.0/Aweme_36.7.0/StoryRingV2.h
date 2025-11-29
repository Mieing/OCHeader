@class NSString;

@interface StoryRingV2 : GPBMessage

@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) BOOL hasItemId;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) BOOL hasAuthorId;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long createTimeMicro;
@property (nonatomic) BOOL hasCreateTimeMicro;
@property (nonatomic) long long ttlTs;
@property (nonatomic) BOOL hasTtlTs;

+ (id)descriptor;

- (long long)ttlTs;
- (long long)createTimeMicro;
- (int)status;
- (id)authorId;
- (id)itemId;

@end
