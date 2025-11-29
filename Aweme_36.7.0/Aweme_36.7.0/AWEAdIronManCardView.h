@class AWEIronManModel, UIImageView, NSString, UILabel, UIView;

@interface AWEAdIronManCardView : UIView <AWEAdIronManCardView>

@property (retain, nonatomic) AWEIronManModel *model;
@property (retain, nonatomic) UIImageView *cardImage;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *challengeLabel;
@property (retain, nonatomic) UIImageView *arrowImage;
@property (retain, nonatomic) UIView *interactionView;
@property (copy, nonatomic) id /* block */ pushIronManBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupModel;
- (void)tappedCard:(id)a0;
- (id)initWithModel:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;

@end
