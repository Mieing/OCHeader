@class NSString;
@protocol IESLLSheetDelegate;

@interface IESLLBasicSheetDelegateAdapter : NSObject <DUXSheetDelegate>

@property (weak, nonatomic) id<IESLLSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetWillDismiss:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceDelegate:(id)a0;

@end
