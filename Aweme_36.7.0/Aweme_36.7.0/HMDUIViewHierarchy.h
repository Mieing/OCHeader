@protocol HMDUIViewHierarchyDelegate;

@interface HMDUIViewHierarchy : NSObject

@property (nonatomic) unsigned long long maxFileCount;
@property (nonatomic) unsigned long long clearFileCount;
@property (weak, nonatomic) id<HMDUIViewHierarchyDelegate> delegate;

+ (id)getDescriptionForUI:(id)a0;
+ (BOOL)enableUploadExtraInfo;
+ (id)shared;

- (id)getViewHierarchy:(id)a0 superView:(id)a1 superVC:(id)a2 withDetail:(BOOL)a3 targetView:(id)a4;
- (id)getViewControllerNode:(id)a0 withDetail:(BOOL)a1;
- (id)getViewNode:(id)a0 withDetail:(BOOL)a1 targetView:(id)a2;
- (void)updateConfigWithMaxFileCount:(unsigned long long)a0 clearFileCount:(unsigned long long)a1;
- (void)recordViewHierarchy:(id)a0;
- (void)uploadViewHierarchyIfNeedWithTitle:(id)a0 subTitle:(id)a1;
- (void)cleanUpExpiredFiles:(double)a0;
- (void).cxx_destruct;

@end
