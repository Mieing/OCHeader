@class UIImageView, UILabel, UIView;

@interface AWEIronManLandingPageBottomBarView : UIView

@property (nonatomic) unsigned long long recordType;
@property (nonatomic) unsigned long long collectingStatus;
@property (nonatomic) unsigned long long currentResult;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) UIImageView *leftIconImage;
@property (retain, nonatomic) UILabel *leftDescLabel;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) UIImageView *rightIconImage;
@property (retain, nonatomic) UILabel *rightDescLabel;
@property (retain, nonatomic) UILabel *midLine;

- (void)impactFeedback;
- (void)moveOutLeftContainer;
- (void)moveOutRightContainer;
- (void)moveInLeftContainer;
- (void)moveInRightContainer;
- (id)initWithRecordType:(unsigned long long)a0 collectingStatus:(unsigned long long)a1;
- (unsigned long long)dragingResultForLongTapGesture:(id)a0;
- (void)dragingEnd;
- (void).cxx_destruct;
- (void)setUpUI;

@end
