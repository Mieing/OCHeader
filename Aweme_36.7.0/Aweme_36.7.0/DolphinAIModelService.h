@interface DolphinAIModelService : NSObject

+ (id)sharedInstance;

- (void)runPTYTask:(id)a0 callback:(id /* block */)a1;

@end
