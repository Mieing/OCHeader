@class NSMutableDictionary, AWEShareAwemeInfoModel, NSDictionary, UIViewController, AWEShareIMModel, NSString, AWEShareStatsModel, BTDShareModel, AWEShareTokenModel, AWEShareQRCodeModel, AWEPageContext, NSArray, NSNumber, AWEShareLinkModel, AWEUserModel, AWEAwemeModel;
@protocol IESIMShareStatsModelProtocol, IESIMShareQRCodeModelProtocol, IESIMShareIMModelProtocol, IESIMShareModelProtocol;

@interface AWEShareContext : NSObject <IESIMShareContextProtocol>

@property (nonatomic) BOOL im_createGroup;
@property (nonatomic) BOOL im_fullScreen;
@property (copy, nonatomic) id /* block */ im_shareDismissFinishBlock;
@property (nonatomic) BOOL im_fromOpenPlatform;
@property (copy, nonatomic) id /* block */ im_openPlatformShareCompletion;
@property (copy, nonatomic) id /* block */ im_clickInviteFriendButtonBlock;
@property (nonatomic) BOOL im_isInviteFriendTogether;
@property (nonatomic) BOOL im_inviteFriendTogetherDisableToast;
@property (copy, nonatomic) NSArray *im_recentSharedIds;
@property (copy, nonatomic) NSNumber *im_maxSelectedNumber;
@property (readonly, nonatomic) id<IESIMShareModelProtocol> model;
@property (retain, nonatomic) id target;
@property (nonatomic) long long targetType;
@property (readonly, nonatomic) id<IESIMShareIMModelProtocol> im;
@property (readonly, nonatomic) id<IESIMShareStatsModelProtocol> stats;
@property (readonly, nonatomic) id<IESIMShareQRCodeModelProtocol> qrCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *postscriptAdditionParams;
@property (weak, nonatomic) AWEPageContext *awe_playInteractiveContext;
@property (retain, nonatomic) NSMutableDictionary *extraTargetDic;
@property (readonly, nonatomic) BTDShareModel *model;
@property (retain, nonatomic) id target;
@property (nonatomic) unsigned long long targetType;
@property (copy, nonatomic) NSString *currentShareType;
@property (nonatomic) long long sceneType;
@property (copy, nonatomic) NSString *viewExtensionClsString;
@property (copy, nonatomic) NSArray *channelTypes;
@property (copy, nonatomic) NSArray *actionTypes;
@property (copy, nonatomic) NSArray *channels;
@property (retain, nonatomic) NSDictionary *trackBtmParams;
@property (readonly, nonatomic) AWEShareIMModel *im;
@property (readonly, nonatomic) AWEShareStatsModel *stats;
@property (readonly, nonatomic) AWEShareLinkModel *link;
@property (readonly, nonatomic) AWEShareTokenModel *token;
@property (readonly, nonatomic) AWEShareQRCodeModel *qrCode;
@property (readonly, nonatomic) AWEShareAwemeInfoModel *awemeInfo;
@property (weak, nonatomic) UIViewController *fromVC;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isNewTwoLineSharePanel;
@property (nonatomic) BOOL enableBreakPointChangeDismiss;
@property (nonatomic) BOOL isActivityShare;
@property (nonatomic) BOOL disableSubPanel;
@property (copy, nonatomic) NSArray *customWebShareItems;
@property (nonatomic) BOOL shareMoreChannelListPanel;
@property (retain, nonatomic) AWEUserModel *user;
@property (readonly, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) id /* block */ shareCompletionBlock;

- (void)setExtraTarget:(id)a0 forKey:(id)a1;
- (id)extraTargetForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
