@class AWEEcomSearchResponse, AWEEcomSearchChunkDataModel, NSError;

@interface AWEEcomSearchChunkProcessResult : NSObject

@property (nonatomic) long long status;
@property (retain, nonatomic) AWEEcomSearchChunkDataModel *processedChunk;
@property (retain, nonatomic) AWEEcomSearchResponse *searchResponse;
@property (nonatomic) double processingTime;
@property (retain, nonatomic) NSError *error;

+ (id)successResultWithData:(id)a0 processingTime:(double)a1;
+ (id)failedResultWithErrorMessage:(id)a0;

- (id)initWithStatus:(long long)a0 error:(id)a1 resultData:(id)a2 processingTime:(double)a3;
- (void).cxx_destruct;

@end
