@class NSString, AWESpecialCardCancelSubscribeSheetConfig, DUXActionSheet;

@interface AWESpecialCardCancelSubscribeSheet : NSObject <DUXActionSheetDelegate>

@property (retain, nonatomic) AWESpecialCardCancelSubscribeSheetConfig *config;
@property (retain, nonatomic) DUXActionSheet *cancelSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheetDidClickMaskArea:(id)a0;
- (void)setupSheet;
- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dismiss:(id /* block */)a0;

@end
