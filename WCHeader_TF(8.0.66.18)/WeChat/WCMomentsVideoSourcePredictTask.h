@class WCDataItem, WCMediaItem, NSDate, NSNumber;

@interface WCMomentsVideoSourcePredictTask : WCMomentsPredictTask <WeChat.IKaraMomentsVideoPredictionExt>

@property (retain, nonatomic) NSNumber *positive;
@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) NSNumber *customPredictionConfidence;
@property (retain, nonatomic) NSDate *datetime;

- (id)initWithDataItem:(id)a0 mediaItem:(id)a1;
- (id)taskID;
- (void)main;
- (void)momentsProphetDidPredictWithDataItem:(id)a0 mediaItem:(id)a1 positive:(id)a2;
- (void).cxx_destruct;

@end
