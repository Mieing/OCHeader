@class BDPPartialBlankDetectionResultModel, BDPBlankDetectionResultModel;

@interface BDPScreenDetectionResultModel : NSObject

@property (retain, nonatomic) BDPBlankDetectionResultModel *blankResult;
@property (retain, nonatomic) BDPPartialBlankDetectionResultModel *partialBlankResult;
@property (retain, nonatomic) BDPPartialBlankDetectionResultModel *classifyResult;
@property (nonatomic) long long snapshotDuration;
@property (nonatomic) long long totalDuration;

- (void).cxx_destruct;

@end
