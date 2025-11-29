@class FinderWindowProductInfo, MMFinderLiveGoodsItem, NSString, MMFinderLiveTaskId, MMFinderLiveOpenProductPageAspect, FinderWindowProductInfo_DetailPage;

@interface MMFinderLiveOpenProductPageParam : NSObject

@property (retain, nonatomic) FinderWindowProductInfo *product;
@property (retain, nonatomic) MMFinderLiveGoodsItem *goods;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *page;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL isSheetMode;
@property (nonatomic) BOOL usePushAnimationForFinderMiniShopPurchasePage;
@property (nonatomic) BOOL usePushAnimation;
@property (nonatomic) BOOL isAnchorOrAssistant;
@property (copy, nonatomic) NSString *entranceGMsgID;
@property (copy, nonatomic) NSString *liveScene;
@property (copy, nonatomic) NSString *sceneNote;
@property (copy, nonatomic) id /* block */ nativeProductShare;
@property (retain, nonatomic) MMFinderLiveOpenProductPageAspect *aspect;
@property (nonatomic) BOOL forbidReplayWidget;

+ (id)param;
+ (id)paramWithProduct:(id)a0;
+ (id)paramWithProduct:(id)a0 type:(unsigned long long)a1;

- (void).cxx_destruct;

@end
