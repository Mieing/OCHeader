@class NSString;

@interface WCSnsSocialInfluenceInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *layerId;
@property (retain, nonatomic) NSString *expId;
@property (nonatomic) int maxLikeCount;
@property (nonatomic) int maxCommentCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_layerId;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_maxLikeCount;
+ (void)PBArrayAdd_maxCommentCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
