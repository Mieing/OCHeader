@class NSMutableArray;

@interface PuzzleWebViewReusePoolGroup : NSObject

@property (nonatomic) unsigned long long poolSize;
@property (retain, nonatomic) NSMutableArray *readyToUseWebViews;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPoolSize:(unsigned long long)a0;

@end
