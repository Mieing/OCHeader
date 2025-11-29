@class NSArray, NSDictionary, DolphinResultOperationSequenceModel;

@interface DolphinRerankResultModel : NSObject

@property (copy, nonatomic) NSArray *indexChangeModels;
@property (retain, nonatomic) DolphinResultOperationSequenceModel *operationSequenceModel;
@property (copy, nonatomic) NSDictionary *pitayaSideParams;
@property (copy, nonatomic) NSDictionary *opMemoryCache;
@property (copy, nonatomic) NSDictionary *innerTrackParams;
@property (nonatomic) BOOL canceled;

- (void).cxx_destruct;

@end
