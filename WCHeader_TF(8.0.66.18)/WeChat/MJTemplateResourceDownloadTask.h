@class WCDownloadArgsWrap, MJVideoTemplate;

@interface MJTemplateResourceDownloadTask : NSObject

@property (retain, nonatomic) MJVideoTemplate *templateInfo;
@property (retain, nonatomic) WCDownloadArgsWrap *downloadArgs;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isHighPriority;

+ (id)taskWithTemplateInfo:(id)a0 completion:(id /* block */)a1;

- (id)initWithTemplateInfo:(id)a0 completion:(id /* block */)a1;
- (void)resume;
- (BOOL)isEqualToTask:(id)a0;
- (void)cancel;
- (BOOL)isRunningOrWaiting;
- (void).cxx_destruct;

@end
