@class NSString;

@interface HMDModuleCallbackPair : NSObject <NSCopying>

@property (retain, nonatomic) NSString *moduleName;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithModuleName:(id)a0 callback:(id /* block */)a1;
- (void)invokeCallbackWithModule:(id)a0 isWorking:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
