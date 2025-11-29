@class NSString;

@interface WaitingInvoke : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id arguments;
@property (copy, nonatomic) id /* block */ result;

- (void).cxx_destruct;

@end
