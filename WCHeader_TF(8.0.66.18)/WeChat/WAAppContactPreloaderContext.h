@class WAAppOpenParameter, WAAppTaskExtInfo, WAAppTaskHandlerWrapper;

@interface WAAppContactPreloaderContext : NSObject

@property (retain, nonatomic) WAAppOpenParameter *openParameter;
@property (retain, nonatomic) WAAppTaskExtInfo *taskInfo;
@property (retain, nonatomic) WAAppTaskHandlerWrapper *handlerWrapper;

- (void).cxx_destruct;

@end
