@class YYLabel, AWEVSPersonalModel, UIImageView, NSDictionary, UILabel, NSString, UIButton;

@interface AWEProfileVSInformationView : UIView

@property (retain, nonatomic) UIImageView *timeIcon;
@property (retain, nonatomic) UILabel *scheduleLable;
@property (retain, nonatomic) UIImageView *introductionIcon;
@property (retain, nonatomic) UIButton *introductionButton;
@property (retain, nonatomic) YYLabel *introductionLabel;
@property (retain, nonatomic) AWEVSPersonalModel *model;
@property (retain, nonatomic) NSDictionary *trackerParam;
@property (copy, nonatomic) NSString *authorId;

- (id)currentThemeName;
- (void)configWithVSPersonalModel:(id)a0 authorId:(id)a1 trackParam:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)handleTapGestureRecognizer:(id)a0;

@end
