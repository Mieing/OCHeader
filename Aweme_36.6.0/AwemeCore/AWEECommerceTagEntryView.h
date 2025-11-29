@class NSString, UIImageView, UILabel, UIView;

@interface AWEECommerceTagEntryView : UIView <AWEECLabelActionProtocol>

@property (copy, nonatomic) id /* block */ tappedBlock;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UILabel *header;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) UIView *separator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewTapped;
- (void)updateUIWithLabel:(id)a0 action:(id /* block */)a1;
- (void)setupWithLabelData:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
