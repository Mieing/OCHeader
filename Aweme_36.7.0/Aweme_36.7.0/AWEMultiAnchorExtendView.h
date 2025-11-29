@class NSString, UIImageView, UILabel, AWEPOIEntryViewLayout;

@interface AWEMultiAnchorExtendView : UIView <AWEMultiAnchorExtendViewProtocol>

@property (retain, nonatomic) AWEPOIEntryViewLayout *layout;
@property (retain, nonatomic) UILabel *multiCountLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) double contentWidth;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickMultiAnchorEventHandler:(id /* block */)a0;
- (void)configMultiAnchorCount:(long long)a0 useSeperate:(BOOL)a1;
- (void)hiddenExtendView;
- (void)clickAction:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (double)contentViewWidth;

@end
