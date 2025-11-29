@class NSString, IESLiveAnchorFansGroupShareConfig, HTSLiveToolbarItem, UIView, UIImageView;
@protocol IESLiveAnchorFansGroupShareProtocol, IESLiveWebPDecoder, HTSLiveToolbar, IESLiveBubbleGuide, IESLiveWebPPlayer, IESLiveRoomService, IESLiveShareService;

@interface IESLiveAnchorFansGroupShareIntegration : NSObject <IESLiveRevenueInteractAction>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveShareService> shareService;
@property (weak, nonatomic) UIView<HTSLiveToolbar> *toolbar;
@property (weak, nonatomic) id<IESLiveAnchorFansGroupShareProtocol> impler;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *buddleGuideView;
@property (retain, nonatomic) IESLiveAnchorFansGroupShareConfig *fansGroupShareConfig;
@property (retain, nonatomic) HTSLiveToolbarItem *fansGroupShareItem;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *fansGroupShareImageView;
@property (retain, nonatomic) id<IESLiveWebPDecoder> insertWebPDecoder;
@property (retain, nonatomic) id<IESLiveWebPDecoder> resumeWebPDecoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)noticePKDesirableTimeReached:(id)a0;
- (void)insertFansGroupShareItem;
- (void)hideAllFansGroupShare;
- (void)resumeGrouopItem;
- (void)showFansGrouopShareBuddle;
- (id)urlWithString:(id)a0;
- (void)endPKAndFansGroupShareRemove;
- (void)receivePKAndFansGroupShareReceived;
- (id)initWithRoom:(id)a0 shareService:(id)a1 toolBar:(id)a2 shareImpler:(id)a3;
- (void)reloadShareService:(id)a0 toolBar:(id)a1;
- (void)prepareLoadConfigInfo;
- (id)shareContentModelWithModel:(id)a0 isShareFansGrouop:(BOOL)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)settingDict;

@end
