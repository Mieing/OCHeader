@class NSString;

@interface AWELiveVerificationImpl : NSObject <IESLiveVerificationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popPictureVerifyViewWithDecision:(id)a0 callback:(id /* block */)a1;
- (void)closeVerifyView;
- (void)popPictureVerifyViewWithCodeType:(long long)a0 Callback:(id /* block */)a1;

@end
