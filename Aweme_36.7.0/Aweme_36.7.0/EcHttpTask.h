@class NSProgress;

@interface EcHttpTask : NSObject

@property (nonatomic) long long retryTimes;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ cancel;
@property (copy, nonatomic) id /* block */ readStreamData;
@property (copy, nonatomic) id /* block */ progressChanged;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
