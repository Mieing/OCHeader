@class NSArray, NSString;

@interface AWEPadDetailTableAdapter : NSObject <AWEPadDetailTableAdapter>

@property (copy, nonatomic) NSArray *whiteListsOfRotateEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (BOOL)Enable;

- (BOOL)rotateABEnable;
- (BOOL)rotateEnableWithCurrentPageRefer:(id)a0;
- (void)performDetailTableUIUpdateWithRefer:(id)a0 completion:(id /* block */)a1;
- (void)config;
- (void).cxx_destruct;
- (id)init;
- (id)weakTarget;

@end
