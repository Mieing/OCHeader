@class UIStackView, UIColor, UIImageView, CAGradientLayer, UILabel, IESECRelationStateSwitcher, NSString;
@protocol IESECRelationMultipleFunctionsFollowViewDelegate;

@interface IESECRelationMultipleFunctionsFollowView : UIView <IESECRelationFollowView> {
    BOOL _flag;
    double _percent;
    unsigned long long _scene;
    BOOL _autoCenter;
}

@property (retain, nonatomic) IESECRelationStateSwitcher *stateSwitcher;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long radius;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIStackView *notFollowContainerView;
@property (retain, nonatomic) UIImageView *notFollowImageView;
@property (retain, nonatomic) UILabel *notFollowLabel;
@property (retain, nonatomic) UILabel *followLabel;
@property (retain, nonatomic) UIImageView *joinFansClubImageView;
@property (retain, nonatomic) UIImageView *fansClubLevelImageView;
@property (retain, nonatomic) UILabel *fansClubLevelLabel;
@property (weak, nonatomic) id<IESECRelationMultipleFunctionsFollowViewDelegate> delegate;
@property (nonatomic) BOOL adaptBigFont;
@property (retain, nonatomic) UIColor *notFollowTextColor;
@property (retain, nonatomic) UIColor *notFollowBackgroundColor;
@property (retain, nonatomic) CAGradientLayer *notFollowGradientLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchFollowViewMode:(unsigned long long)a0;
- (id)initWithViewSize:(unsigned long long)a0 radius:(unsigned long long)a1 scene:(unsigned long long)a2;
- (id)initWithViewSize:(unsigned long long)a0 radius:(unsigned long long)a1 scene:(unsigned long long)a2 autoCenter:(BOOL)a3;
- (void)updateFollowViewWithSize:(unsigned long long)a0;
- (void)updateFollowViewWithRadius:(unsigned long long)a0;
- (double)getSizeScale:(double)a0;
- (void)updateNotFollowWithSize:(unsigned long long)a0;
- (double)getFontSize;
- (id)followViewBackgroundColor;
- (id)followViewTextColor;
- (void)fansClubButtonShow;
- (id)notFollowImageName;
- (void)updateFollowViewWithStyle:(unsigned long long)a0;
- (void)updateFollowViewWithPercent:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;
- (void)tapAction;

@end
