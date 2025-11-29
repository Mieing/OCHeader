@class NSString, UILabel;

@interface BDPLongTermSubscribeFooterView : UIView {
    NSString *_refusalText;
    UILabel *_refusalLabel;
}

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) id /* block */ callback;

- (void)refusalLabelClicked;
- (id)initWithRefusalText:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
