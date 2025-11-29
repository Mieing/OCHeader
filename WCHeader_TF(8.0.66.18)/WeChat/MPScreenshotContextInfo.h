@class NSString;

@interface MPScreenshotContextInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *imageUUID;
@property (copy, nonatomic) NSString *articleURL;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned long long bizuin;
@property (nonatomic) unsigned long long mid;
@property (nonatomic) unsigned int idx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_imageUUID;
+ (void)PBArrayAdd_articleURL;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_bizuin;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_idx;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)articleInfo;
- (void).cxx_destruct;

@end
