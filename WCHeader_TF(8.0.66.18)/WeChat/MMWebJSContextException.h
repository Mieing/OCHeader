@class NSString;

@interface MMWebJSContextException : NSObject

@property (copy, nonatomic) NSString *contextName;
@property (copy, nonatomic) NSString *exceptionName;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *stack;

- (void).cxx_destruct;

@end
