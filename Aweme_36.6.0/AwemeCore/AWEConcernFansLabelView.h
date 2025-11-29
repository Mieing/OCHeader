@class UIColor, NSArray, NSString, AWEUserFansTag, UIButton;

@interface AWEConcernFansLabelView : UIView

@property (retain, nonatomic) UIButton *highValueFans;
@property (retain, nonatomic) UIButton *liveClubFans;
@property (retain, nonatomic) UIButton *liveVip;
@property (retain, nonatomic) UIButton *commerceVip;
@property (retain, nonatomic) AWEUserFansTag *highValuesLabel;
@property (retain, nonatomic) AWEUserFansTag *liveClubFanLabel;
@property (retain, nonatomic) AWEUserFansTag *liveVipLabel;
@property (retain, nonatomic) AWEUserFansTag *commerceVipLabel;
@property (nonatomic) double iconSize;
@property (nonatomic) double scale;
@property (nonatomic) double highValueFansWidth;
@property (nonatomic) double highValueFansFontSize;
@property (copy, nonatomic) NSArray *labels;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL closeOpen;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIColor *highValueFansTextColor;
@property (readonly, nonatomic) BOOL shouldShowHighValueFans;
@property (readonly, nonatomic) BOOL shouldShowLiveClubFans;
@property (readonly, nonatomic) BOOL shouldShowLiveVip;
@property (readonly, nonatomic) BOOL shouldShowCommerceVip;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *secAnchorId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *requestPage;

- (id)initWithIconSize:(double)a0 highValueFansWidth:(double)a1 highValueFansFontSize:(double)a2;
- (id)initWithIconSize:(double)a0 scale:(double)a1 highValueFansWidth:(double)a2 highValueFansFontSize:(double)a3;
- (id)liveClubDefaultImage;
- (id)commerceVipDefaultImage;
- (id)targetViewForType:(long long)a0;
- (void)_highValueFansClick;
- (void)_liveClubFansClick;
- (void)_liveVipClick;
- (void)_commerceVipClick;
- (id)_buildLiveRoomUrl:(id)a0;
- (id)initWithIconSize:(double)a0;
- (id)initWithIconSize:(double)a0 scale:(double)a1;
- (double)widthWithLabels:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
