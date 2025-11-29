@class NSString, DownloadGlobalParameters;

@interface LiteTaskConfig : NSObject

@property (retain, nonatomic) DownloadGlobalParameters *param;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) NSString *fileName;

- (id)initWhithParam:(id)a0 param:(id)a1 progressCallback:(id /* block */)a2 resultCallback:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
