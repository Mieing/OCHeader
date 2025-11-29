@class NSNumber, NSString, AWENewsAISmartLoadTimeModel, BDXBridgeEventSubscriber, AWECodeGenBusinessInfoModel, AWECodeGenRenderInfoModel, NSMutableArray;

@interface AWENewsAISmartCellModel : NSObject <AWECommonFeedCellModelProtocol>

@property (retain, nonatomic) BDXBridgeEventSubscriber *followSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *submitSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *trackShowSubscriber;
@property (nonatomic) double lynxCardHeight;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *cardType;
@property (retain, nonatomic) AWECodeGenBusinessInfoModel *businessInfoModel;
@property (retain, nonatomic) AWECodeGenRenderInfoModel *renderInfoModel;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) long long trackStatus;
@property (retain, nonatomic) NSMutableArray *deleteNewsArray;
@property (retain, nonatomic) NSMutableArray *latestTrackArray;
@property (retain, nonatomic) NSNumber *refreshNum;
@property (nonatomic) BOOL isFirstUnSubscribeCard;
@property (nonatomic) BOOL needUpdateLynxHeight;
@property (retain, nonatomic) AWENewsAISmartLoadTimeModel *loadTimeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellSizeWithConstraintWidth:(double)a0;
- (void)configWithSectionData:(id)a0;
- (void)p_registerEvent;
- (BOOL)cellWidthGreaterThanHeight;
- (void)p_updateFollowStateWithParams:(id)a0;
- (void)p_updateDeleteNews:(id)a0;
- (void)p_updateShowTrack:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
