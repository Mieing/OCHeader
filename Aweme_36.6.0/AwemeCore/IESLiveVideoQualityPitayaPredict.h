@class NSString, NSMutableArray;

@interface IESLiveVideoQualityPitayaPredict : NSObject

@property (copy, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSMutableArray *predictVideoQualityList;

- (void)smartPredictVideoScore:(id)a0 roomID:(id)a1 param:(id)a2 callback:(id /* block */)a3;
- (id)getPredictVideoQualityAnchorID:(id)a0 roomID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
