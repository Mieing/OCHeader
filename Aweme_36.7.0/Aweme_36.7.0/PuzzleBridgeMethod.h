@class NSString;

@interface PuzzleBridgeMethod : NSObject

@property (readonly, nonatomic) unsigned long long authType;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) NSString *methodName;

- (id)initWithMethodName:(id)a0 handler:(id /* block */)a1 authType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
