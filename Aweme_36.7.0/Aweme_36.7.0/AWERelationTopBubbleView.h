@class NSString, UIVisualEffectView, UILabel, AWEHotsoonRegularBarModel, UIButton;

@interface AWERelationTopBubbleView : UIView <AWERelationBubbleViewProtocol>

@property (retain, nonatomic) AWEHotsoonRegularBarModel *model;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ complete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 topOffset:(double)a1;
- (void)agreeAction;
- (id)initWithModel:(id)a0 scene:(unsigned long long)a1 complete:(id /* block */)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (void)closeAction;
- (void)setupUI;

@end
