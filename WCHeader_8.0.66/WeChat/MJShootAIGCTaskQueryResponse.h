@class OMJAIGCQueryResponse;

@interface MJShootAIGCTaskQueryResponse : NSObject

@property (retain, nonatomic) OMJAIGCQueryResponse *queryResponse;
@property (nonatomic) unsigned int estimatedAigcWaitTime;
@property (nonatomic) unsigned int completionPercentage;
@property (nonatomic) unsigned int maxWaitingTime;
@property (nonatomic) BOOL isFailed;

- (void).cxx_destruct;

@end
