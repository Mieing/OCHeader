@class NSString, DUXLoadingToast;

@interface LSIMLoadingToastImpl : NSObject <LSIMLoadingToastProtocol>

@property (copy, nonatomic) NSString *toastText;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLoadingToastOnView:(id)a0;
- (void)showLoadingToast;
- (void)showLoadingToastWithCover:(BOOL)a0;
- (void)dismiss;
- (void).cxx_destruct;

@end
