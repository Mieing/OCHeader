@class NSString, NSMutableSet;

@interface IESLiveGiftPanelImageMonitorHelper : NSObject <IESLiveGiftInnerActions, HTSLiveGiftActions>

@property (nonatomic) double duration;
@property (nonatomic) BOOL loadSuccess;
@property (nonatomic) double loadStartTimestamp;
@property (nonatomic) double lastLoadTimestamp;
@property (retain, nonatomic) NSMutableSet *giftIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)giftViewWillShow;
- (id)firstScreenImageLoadInfoWithCoreTimePoint:(id)a0;
- (void)giftViewSingleCellIconLoadStartWithGiftId:(id)a0;
- (void)giftViewSingleCellIconLoadFinishWithGiftId:(id)a0 success:(BOOL)a1 endTimestamp:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
