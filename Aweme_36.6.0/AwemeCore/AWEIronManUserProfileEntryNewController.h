@class AWEProfileExtensionAreaCommonParamModel, NSString, UIImageView, NSDictionary, UIView, UILabel, AWEURLModel;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol;

@interface AWEIronManUserProfileEntryNewController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (nonatomic) BOOL shouldReported;
@property (nonatomic) BOOL shouldSendInTimeReq;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardNewView;
@property (retain, nonatomic) UIView *customDetailView;
@property (retain, nonatomic) UIImageView *subTitleIcon;
@property (retain, nonatomic) UILabel *subTitle;
@property (copy, nonatomic) NSString *microAppId;
@property (copy, nonatomic) NSString *subTitleStr;
@property (copy, nonatomic) NSString *subTitleIconUrl;
@property (retain, nonatomic) AWEURLModel *subTitleIconModel;
@property (retain, nonatomic) NSDictionary *trackData;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (copy, nonatomic) NSDictionary *routeCommonParamDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)configDelegate:(id)a0;
- (void)cardDidDisappear;
- (id)cardModel;
- (void)sendExposeTrackEvent;
- (void)sendClickTrackEvent;
- (void)sendInTimeShowReq;
- (void)sendSubtitleExposeTrackEvent;
- (BOOL)enableCustomDetailView;
- (void)createCustomDetailView;
- (double)customDetailViewWidth;
- (double)subtitleIconWidth;
- (id)customDetailViewTextFont;
- (void).cxx_destruct;
- (id)init;
- (void)setCardData:(id)a0;

@end
