@class NSString, NSDictionary, NSArray, UIImage, NSMutableAttributedString;
@protocol IESIMShareContextProtocol, IESIMContactPickerLayoutProtocol;

@interface AWEIMGroupCreatePanelContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupCreateSource;
@property (copy, nonatomic) NSString *groupShareCommandEnterFrom;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;
@property (nonatomic) BOOL noNeedWechatShare;
@property (copy, nonatomic) NSString *wechatShareScene;
@property (nonatomic) BOOL doNotHideMyself;
@property (nonatomic) BOOL hasTaskType;
@property (nonatomic) BOOL onlyGroup;
@property (nonatomic) BOOL notFilterFollower;
@property (nonatomic) BOOL shouldNotSearchInPanel;
@property (nonatomic) BOOL noNeedCurrentGroup;
@property (nonatomic) BOOL noNeedFaceToFace;
@property (nonatomic) BOOL needMyGroup;
@property (nonatomic) BOOL needManageFaceGroup;
@property (nonatomic) BOOL showIncentiveIcon;
@property (nonatomic) BOOL disableCreateGroupAlone;
@property (nonatomic) BOOL noNeedSendGroupShareCommand;
@property (nonatomic) BOOL isIncentiveRecommend;
@property (nonatomic) long long requiredSelectCount;
@property (nonatomic) BOOL needSelectStickOnTopUids;
@property (copy, nonatomic) NSArray *stickOnTopUidArray;
@property (copy, nonatomic) NSArray *stickOnTopUserArray;
@property (copy, nonatomic) NSDictionary *userExt;
@property (copy, nonatomic) NSArray *defaultSelectUserIDs;
@property (retain, nonatomic) NSMutableAttributedString *stickOnTopSectionTitle;
@property (retain, nonatomic) NSMutableAttributedString *recentShareSectionTitle;
@property (copy, nonatomic) NSString *contentSectionInsetsString;
@property (nonatomic) BOOL rootViewLayoutFromTopOfContainer;
@property (retain, nonatomic) id<IESIMContactPickerLayoutProtocol> customLayout;
@property (nonatomic) BOOL needCreateOpenGroup;
@property (nonatomic) BOOL notDismiss;
@property (nonatomic) BOOL needFloatModeMessageVC;
@property (nonatomic) BOOL doNotTransferToGroup;
@property (nonatomic) BOOL shouldShowNaviBar;
@property (nonatomic) BOOL disableShowInnerPush;
@property (nonatomic) BOOL dismissSuperVC;
@property (copy, nonatomic) NSString *customConfirmTitle;
@property (nonatomic) BOOL isFullScreenSharePanel;
@property (nonatomic) BOOL assignDarkBackgroundColor;
@property (copy, nonatomic) NSString *pageTitle;
@property (nonatomic) BOOL needUseRecentChatData;
@property (nonatomic) BOOL useWeChatUIStyle;
@property (nonatomic) BOOL needDescription;
@property (retain, nonatomic) UIImage *descriptionIcon;
@property (copy, nonatomic) NSString *descriptionTitle;
@property (copy, nonatomic) NSString *descriptionSubtitle;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ selectUserBlock;
@property (copy, nonatomic) id /* block */ willTransferToMessageVCBlock;
@property (copy, nonatomic) id /* block */ didTransferToFaceToFaceVC;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSDictionary *bizExt;
@property (copy, nonatomic) NSDictionary *extraParamDict;
@property (nonatomic) BOOL enableTrackCommonClickEvent;
@property (retain, nonatomic) id<IESIMShareContextProtocol> shareContext;

+ (id)defaultContextWithEnterFrom:(id)a0 enterMethod:(id)a1;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)initWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (void)updateWechatShareScene:(id)a0;
- (void).cxx_destruct;

@end
