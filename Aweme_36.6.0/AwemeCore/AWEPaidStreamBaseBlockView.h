@class AWEPaidStreamUIConfig, NSString, UIView;

@interface AWEPaidStreamBaseBlockView : UIView <AWEPaidStreamBlockView>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEPaidStreamUIConfig *uiConfig;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUIconfig:(id)a0;
- (void)install:(unsigned long long)a0 uiConfig:(id)a1 paymentButtonView:(id)a2 actionHandler:(id /* block */)a3;
- (void)uninstall;
- (void).cxx_destruct;
- (void)setup;
- (void)clearContent;
- (void)showContent;

@end
