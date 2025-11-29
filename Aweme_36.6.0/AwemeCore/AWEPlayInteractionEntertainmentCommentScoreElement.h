@class NSString, UIImageView, UILabel, UIView;

@interface AWEPlayInteractionEntertainmentCommentScoreElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *preTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithContext:(id)a0;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })iconSize;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)context;
- (double)labelFontSize;

@end
