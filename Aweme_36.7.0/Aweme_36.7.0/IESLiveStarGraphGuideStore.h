@class AnchorStarOpenInfo, NSString, IESLiveGuideModel, GetAnchorStarStatusResponse_Data, IESLiveStarGraphApi;

@interface IESLiveStarGraphGuideStore : NSObject <IESLiveGuideActions>

@property (retain, nonatomic) IESLiveStarGraphApi *guideApi;
@property (retain, nonatomic) GetAnchorStarStatusResponse_Data *starStatusInfo;
@property (nonatomic) BOOL guideAlertIsShowed;
@property (nonatomic) BOOL bubbleIsShowed;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (nonatomic) BOOL needShowGuideAlert;
@property (retain, nonatomic) AnchorStarOpenInfo *guideAlertInfo;
@property (nonatomic) BOOL needShowGuideToolBarItem;
@property (nonatomic) BOOL guideToolBarItemShowRedDot;
@property (retain, nonatomic) NSString *guideToolBarItemBubbleTitle;
@property (retain, nonatomic) NSString *openWebViewUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)changeLiveType:(unsigned long long)a0;
- (void)updateOpenLiveModel:(id)a0;
- (id)initWithGuideModel:(id)a0;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)loadGuideAlertStatus;
- (void)guideToolBarItemDidClicked;
- (void)setToolBarItemStatusWithLiveType:(unsigned long long)a0;
- (void)bindStarTaskIfNeed;
- (void).cxx_destruct;

@end
