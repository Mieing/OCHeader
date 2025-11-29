@class FeedItem, NSString, AWEAwemeModel;
@protocol IESLiveFeedInnerAntiAddictService;

@interface AWELiveFeedAntiAddictClearViewServiceImpl : NSObject <IESLiveFeedAntiAddictClearViewService>

@property (nonatomic) unsigned long long antiAddictType;
@property (retain, nonatomic) AWEAwemeModel *antiAddictModel;
@property (retain, nonatomic) FeedItem *antiAddictFeedItem;
@property (weak, nonatomic) id<IESLiveFeedInnerAntiAddictService> innerAntiAddictService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (BOOL)useAntiAddictModernCell;
- (id)antiAddictClearViewTitle;
- (id)antiAddictClearViewSubTitle;
- (void)preInsertAntiAddictData:(id)a0;
- (void)handleAntiAddictLeaveNotification:(id)a0;
- (id)noticeTypeStrFor:(id)a0;
- (id)noticeStyleStrFor:(id)a0;
- (void)insertAntiAddictData:(id)a0;
- (id)antiAddictClearViewConfirmBtnTitle;
- (void)removeAntiData;
- (void)trackNoticeViewShow:(id)a0;
- (id)getVideoType;
- (void)insertAntiData:(id)a0;
- (id)getAntiAddictParams;
- (id)getInnerAntiAddictService;
- (void)antiAddictCardEnter;
- (id)antiAddictClearView;
- (void)ignoreBtnClicked;
- (void)addAntiAddictFeedItemIfNeeded;
- (void)antiAddictCardStayTime:(id)a0;
- (void)antiAddictionNoticeShow:(id)a0;
- (id)antiAddictPlayerWrapper;
- (void)updateAntiAddictPlayer:(id)a0 enterFrom:(id)a1;
- (void)antiAddictClearViewShowReplaceToastIfNeed:(long long)a0;
- (void)updateInnerFeedAntiAddictionService:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
