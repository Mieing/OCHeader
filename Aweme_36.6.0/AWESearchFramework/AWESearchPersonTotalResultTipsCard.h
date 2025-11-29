@class NSString, AWESearchPersonTotalResutTipsModel, UILabel, AWESearchCachalotResultContext, CALayer;

@interface AWESearchPersonTotalResultTipsCard : UIView <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) UILabel *tipsLable;
@property (retain, nonatomic) AWESearchCachalotResultContext *context;
@property (retain, nonatomic) AWESearchPersonTotalResutTipsModel *tipsModel;
@property (retain, nonatomic) CALayer *graditentLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)configUI;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
