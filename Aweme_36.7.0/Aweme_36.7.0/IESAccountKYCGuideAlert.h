@class NSString, IESAccountKYCGuideAlertModel, DUXContentSheet;

@interface IESAccountKYCGuideAlert : NSObject <DUXSheetDelegate>

@property (retain, nonatomic) IESAccountKYCGuideAlertModel *model;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (copy, nonatomic) id /* block */ clickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)buttonClicked;
- (void)trackShow;
- (void)trackClick:(id)a0;
- (void)showWithModel:(id)a0 clickAction:(id /* block */)a1;
- (void).cxx_destruct;
- (id)blockType;

@end
