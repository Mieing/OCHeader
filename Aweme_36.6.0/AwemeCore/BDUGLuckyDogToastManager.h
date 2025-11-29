@class NSString;

@interface BDUGLuckyDogToastManager : NSObject <BDUGLuckyDogToastManagerProtocol>

@property (nonatomic) long long lastPopUpId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startupDialogModule;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)__requestImageWithModel:(id)a0 completion:(id /* block */)a1;
- (id)__imageWithImageName:(id)a0;
- (void)showDefaultToastWithParams:(id)a0;
- (void)showDefaultToastWithText:(id)a0;
- (void)showToast:(id)a0 model:(id)a1;
- (id)defaultParentView;
- (void)dismissToast:(id)a0 animated:(BOOL)a1;

@end
