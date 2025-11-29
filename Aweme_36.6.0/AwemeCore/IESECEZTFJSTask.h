@class NSString, JsWorkerIOS;

@interface IESECEZTFJSTask : NSObject

@property (copy, nonatomic) NSString *jsURL;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) JsWorkerIOS *jsWorker;

- (void)loadJS:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
