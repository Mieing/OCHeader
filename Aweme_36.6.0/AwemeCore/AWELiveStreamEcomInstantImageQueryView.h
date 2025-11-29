@class AWELiveStreamInstantEcomItemModel, UIImageView, NSString, UILabel;

@interface AWELiveStreamEcomInstantImageQueryView : UIView <AWELiveStreamEcomInstantItemProtocol>

@property (retain, nonatomic) UIImageView *liveTopTag;
@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) UILabel *searchContent;
@property (retain, nonatomic) AWELiveStreamInstantEcomItemModel *model;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void)tapQueryItem;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
