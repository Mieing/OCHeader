@class NSString, NSDictionary, AWEAwemeModel;
@protocol AWEGoodsBasicModelProtocol, AWEAwemePlayInteractionPanelControllerProtocol, AWEAwemePlayInteractionPlayDelegate;

@interface AWEECFeedEntranceRequest : NSObject <AWEECFeedEntranceRequestProtocol>

@property (readonly, nonatomic) BOOL shouldOpenUrl;
@property (readonly, nonatomic) BOOL shouldOneStepOrder;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *carrierType;
@property (copy, nonatomic) NSString *sourceMethod;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (copy, nonatomic) NSDictionary *btmInfoDict;
@property (retain, nonatomic) NSDictionary *anchorClickPassthroughParams;
@property (nonatomic) BOOL enterGoodsDetail;
@property (nonatomic) BOOL autoPop;
@property (readonly, nonatomic) id<AWEGoodsBasicModelProtocol> goods;
@property (readonly, nonatomic) BOOL shoudEnterInternalFlow;
@property (readonly, nonatomic) BOOL isSearchScene;
@property (readonly, nonatomic) BOOL isInternalFlowFullScreenMode;
@property (nonatomic) long long padSplitMode;
@property (copy, nonatomic) NSDictionary *aggParams;
@property (nonatomic) BOOL expectEnterInternalFeed;
@property (nonatomic) long long internalFeedRecommendType;
@property (retain, nonatomic) id<AWEGoodsBasicModelProtocol> externalGoods;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPanelControllerProtocol> panelController;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPlayDelegate> interactionController;
@property (nonatomic) long long internalListStyle;
@property (copy, nonatomic) NSString *standardTrackParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canOpenInternalFeedWithAwemeModel:(id)a0 referString:(id)a1;
+ (id)tmpGoodsWithAwemeModel:(id)a0;
+ (id)searchScenes;

- (id)goods;
- (BOOL)shoudEnterInternalFlow;
- (BOOL)isSearchScene;
- (BOOL)isInternalFlowFullScreenMode;
- (void).cxx_destruct;
- (id)init;

@end
