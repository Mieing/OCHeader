@class NSString, UIImageView, AWEAwemeModel, UILabel;

@interface AWEModernFeedVideoBookBarView : UIView

@property (retain, nonatomic) UIImageView *bookIconImageView;
@property (retain, nonatomic) UILabel *bookTitleLabel;
@property (retain, nonatomic) UIImageView *arrowIconImageView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long barStayStartTime;
@property (nonatomic) BOOL hasTrackedShow;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *keyword;

- (void)configUI;
- (void)bookBarTapped;
- (void)trackBookBarClick;
- (void)trackBookBarWithEvent:(id)a0 params:(id)a1;
- (void)trackBookBarShowWithTime:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
