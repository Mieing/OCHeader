@class NSString;

@interface JSBMethod : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) unsigned long long authType;

- (id)initWithHanlder:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
