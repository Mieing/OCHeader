@class UIButton, AWEAwemeModel, UIVisualEffectView, AWEPlayInteractionContext, UIView, UILabel, BDImageView;
@protocol AWERecommendEntryDelegate;

@interface AWERecommendEntryEditView : UIView

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) BDImageView *onlyIconImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWERecommendEntryDelegate> delegate;
@property (retain, nonatomic) AWEAwemeModel *model;

- (void)closeButtonClicked:(id)a0;
- (void)exitEditMode;
- (void)updateRemoteImageFor:(id)a0 defaultImageName:(id)a1 remoteURLString:(id)a2;
- (void)tapEntry:(id)a0;
- (void).cxx_destruct;
- (void)initUI;

@end
