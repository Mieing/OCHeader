@class NSString, DUXContentSheet;
@protocol AWETeenRecommendAlertDelegate;

@interface AWETeenRecommendAlert : NSObject <AWEAlertProtocol, DUXSheetDelegate>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (copy, nonatomic) id /* block */ onClose;
@property (weak, nonatomic) id<AWETeenRecommendAlertDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidDismiss:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (id)panelImage;
- (void)onAlertViewControllerDealloc;
- (void).cxx_destruct;
- (void)showWithCompletion:(id /* block */)a0;
- (void)dismissSheet;

@end
