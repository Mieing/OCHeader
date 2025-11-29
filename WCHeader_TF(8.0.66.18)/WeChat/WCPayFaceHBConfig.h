@class NSString;

@interface WCPayFaceHBConfig : NSObject <PBCoding>

@property (nonatomic) unsigned int resourceVersion;
@property (nonatomic) unsigned long long uiTotalMount;
@property (nonatomic) unsigned int uiTotalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_resourceVersion;
+ (void)PBArrayAdd_uiTotalMount;
+ (void)PBArrayAdd_uiTotalCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;

@end
