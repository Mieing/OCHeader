@class NSString, NSArray;

@interface AWEIMIncentiveGroupInvitePanelConfig : NSObject

@property (copy, nonatomic) NSString *panelBackGroundColor;
@property (copy, nonatomic) NSString *panelTitleImageUrl;
@property (nonatomic) double panelTitleImageHeight;
@property (copy, nonatomic) NSString *panelMainTitleImageUrl;
@property (nonatomic) double panelMainTitleMiddleOffset;
@property (nonatomic) struct CGSize { double width; double height; } panelMainTitleSize;
@property (copy, nonatomic) NSString *panelSubTitleText;
@property (copy, nonatomic) NSString *panelSubTitleColor;
@property (copy, nonatomic) NSString *emptyPanelTitleText;
@property (copy, nonatomic) NSString *emptyPanelSubTitleText;
@property (nonatomic) BOOL panelTipsEnable;
@property (copy, nonatomic) NSString *detailInfoMainTitle;
@property (copy, nonatomic) NSArray *detailInfoSubTitlesArray;
@property (nonatomic) BOOL enableF2FCreateGroup;
@property (copy, nonatomic) NSString *f2fCellTitleText;
@property (copy, nonatomic) NSString *f2fCellSubTitleText;
@property (copy, nonatomic) NSString *hasNoQuotaToastStr;
@property (nonatomic) BOOL enableHasNoQuotaToast;
@property (copy, nonatomic) NSString *panelInviteBtnText;
@property (copy, nonatomic) NSString *panelInvitingBtnText;
@property (copy, nonatomic) NSString *panelJoinedBtnText;
@property (copy, nonatomic) NSString *panelCellTitleColor;
@property (copy, nonatomic) NSString *panelAlphaVideoPath;
@property (copy, nonatomic) NSString *panelDefaultImageUrl;
@property (copy, nonatomic) NSString *panelMangoFireworkImageUrl;
@property (nonatomic) long long panelMaxShowCount;
@property (nonatomic) long long inputSDKMaxCount;
@property (nonatomic) long long scanDBEveryPageCount;
@property (nonatomic) BOOL enableFilterDuplicateGroup;
@property (nonatomic) BOOL isInMangoTime;

+ (id)getAWEIMIncentiveGroupInvitePanelConfig;

- (void).cxx_destruct;

@end
