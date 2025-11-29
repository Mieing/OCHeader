@class NSString;

@interface IESBridgeMethod : NSObject

@property (readonly, nonatomic) unsigned long long authType;
@property (readonly, copy, nonatomic) NSString *methodName;
@property (readonly, copy, nonatomic) NSString *methodNamespace;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)initWithMethodName:(id)a0 methodNamespace:(id)a1 authType:(unsigned long long)a2 handler:(id /* block */)a3;
- (void).cxx_destruct;

@end
