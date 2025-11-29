@class TTHttpTask, NSProgress, NSString;

@interface IESLiveKTVDownloaderV2Item : NSObject

@property (retain, nonatomic) TTHttpTask *task;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) double timeoutTS;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithKey:(id)a0 url:(id)a1 timeoutSecond:(int)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
