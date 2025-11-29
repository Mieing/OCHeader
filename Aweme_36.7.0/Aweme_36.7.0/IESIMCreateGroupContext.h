@class NSString, NSDictionary, UIImage, NSError, NSMutableAttributedString;
@protocol IESIMShareContextProtocol;

@interface IESIMCreateGroupContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL noNeedWechatShare;
@property (copy, nonatomic) NSString *wechatShareScene;
@property (nonatomic) BOOL notDismiss;
@property (copy, nonatomic) NSString *groupCreateSource;
@property (copy, nonatomic) NSString *groupShareCommandEnterFrom;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;
@property (nonatomic) BOOL needFloatModeMessageVC;
@property (nonatomic) BOOL dismissSuperVC;
@property (retain, nonatomic) NSDictionary *bizExt;
@property (nonatomic) BOOL noNeedCurrentGroup;
@property (nonatomic) BOOL noNeedFaceToFace;
@property (nonatomic) BOOL needManageFaceGroup;
@property (nonatomic) BOOL needCreateOpenGroup;
@property (nonatomic) BOOL needMyGroup;
@property (nonatomic) BOOL disableCreateGroupAlone;
@property (nonatomic) BOOL noNeedSendGroupShareCommand;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *customConfirmTitle;
@property (retain, nonatomic) NSMutableAttributedString *stickOnTopSectionTitle;
@property (retain, nonatomic) NSMutableAttributedString *recentShareSectionTitle;
@property (nonatomic) BOOL doNotTransferToGroup;
@property (nonatomic) BOOL enableTrackCommonClickEvent;
@property (retain, nonatomic) id<IESIMShareContextProtocol> shareContext;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ selectUserBlock;
@property (copy, nonatomic) id /* block */ willTransferToMessageVCBlock;
@property (copy, nonatomic) id /* block */ didTransferToFaceToFaceVC;
@property (readonly, copy, nonatomic) NSDictionary *paramDict;
@property (copy, nonatomic) NSDictionary *extraParamDict;
@property (retain, nonatomic) NSError *creatGroupError;
@property (nonatomic) BOOL didCreateGroup;
@property (nonatomic) BOOL didClickOpenGroup;
@property (nonatomic) BOOL isFullScreenSharePanel;
@property (nonatomic) BOOL useWeChatUIStyle;
@property (copy, nonatomic) NSString *pageTitle;
@property (nonatomic) BOOL needUseRecentChatData;
@property (nonatomic) BOOL showIncentiveIcon;
@property (nonatomic) long long requiredSelectCount;
@property (nonatomic) BOOL needDescription;
@property (retain, nonatomic) UIImage *descriptionIcon;
@property (copy, nonatomic) NSString *descriptionTitle;
@property (copy, nonatomic) NSString *descriptionSubtitle;

- (void).cxx_destruct;

@end
