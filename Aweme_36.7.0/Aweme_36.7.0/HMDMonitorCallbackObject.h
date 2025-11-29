@class NSString;

@interface HMDMonitorCallbackObject : NSObject

@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) NSString *moduleName;

- (id)initWithModuleName:(id)a0 callBack:(id /* block */)a1;
- (void).cxx_destruct;

@end
