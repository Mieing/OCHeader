@class JsWorkerIOS;

@interface BSWorkerOC : NSObject

@property (retain, nonatomic) JsWorkerIOS *worker;

+ (id)shareInstance;

- (void)configWorkerSpace:(id)a0;
- (void).cxx_destruct;

@end
