@class NSString;

@interface WAWebSocketHandlerCallback : NSObject

@property (copy, nonatomic) id /* block */ openhandler;
@property (copy, nonatomic) id /* block */ closehandler;
@property (copy, nonatomic) id /* block */ errorhandler;
@property (copy, nonatomic) id /* block */ msghandler;
@property (copy, nonatomic) NSString *taskId;

- (void).cxx_destruct;

@end
