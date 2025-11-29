@class UIFont, NSArray, NSString, UIColor, AWELiveFeedLabelInfoModel, HTSLiveRoom;

@interface AWESkylightCellEntranceConfig : NSObject

@property (retain, nonatomic) NSArray *avatarURLList;
@property (retain, nonatomic) NSArray *avatarBroderGradientColors;
@property (nonatomic) BOOL shouldShowBreathAnimation;
@property (copy, nonatomic) NSString *tagTitle;
@property (retain, nonatomic) UIFont *tagTextFont;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (retain, nonatomic) UIColor *tagFromColor;
@property (retain, nonatomic) UIColor *tagToColor;
@property (copy, nonatomic) NSString *descTitle;
@property (nonatomic) BOOL isPinedUser;
@property (nonatomic) BOOL shouldShowRedDot;
@property (retain, nonatomic) AWELiveFeedLabelInfoModel *topFeedTagLabel;
@property (retain, nonatomic) AWELiveFeedLabelInfoModel *bottomFeedTagLabel;
@property (retain, nonatomic) HTSLiveRoom *liveModel;

- (void).cxx_destruct;

@end
