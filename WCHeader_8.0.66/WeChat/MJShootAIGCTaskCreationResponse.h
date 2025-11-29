@class OMJAIGCSubmitResponse;

@interface MJShootAIGCTaskCreationResponse : NSObject

@property (retain, nonatomic) OMJAIGCSubmitResponse *submitResponse;
@property (nonatomic) unsigned int estimatedAigcWaitTime;
@property (nonatomic) BOOL showLongWaitButton;
@property (nonatomic) BOOL isFailed;

- (void).cxx_destruct;

@end
