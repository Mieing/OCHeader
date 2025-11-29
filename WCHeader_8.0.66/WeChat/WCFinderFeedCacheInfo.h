@class NSString;

@interface WCFinderFeedCacheInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) int commentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_commentScene;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
