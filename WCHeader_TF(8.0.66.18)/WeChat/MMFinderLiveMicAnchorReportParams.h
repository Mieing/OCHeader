@class NSString;

@interface MMFinderLiveMicAnchorReportParams : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *candidateRequestId;

- (id)initWithFinderUsername:(id)a0 feedId:(id)a1 candidateRequestId:(id)a2;
- (id)initWithMicUser:(id)a0;
- (void).cxx_destruct;

@end
