@class NSString, AWEIMDescriptionViewContext;
@protocol AWEIMGroupUpgradeConfirmButtonViewModelDelegate;

@interface AWEIMGroupUpgradeConfirmButtonViewModel : NSObject

@property (weak, nonatomic) id<AWEIMGroupUpgradeConfirmButtonViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *leftButtonTitle;
@property (nonatomic) BOOL isLeftButtonEnable;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (nonatomic) BOOL isConfirmButtonEnable;
@property (retain, nonatomic) AWEIMDescriptionViewContext *tipViewContext;

- (void)updateTipViewContextWith:(id)a0 templateActions:(id)a1;
- (void).cxx_destruct;

@end
