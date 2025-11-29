@class NSMutableArray;

@interface WCBusyThreadPool : NSObject

@property (retain, nonatomic) NSMutableArray *store;

- (id)init;
- (void)addCallStack:(id)a0;
- (id)makeCallTree;
- (id)makeFrame:(id)a0;
- (void)addFrame:(id)a0 to:(id)a1;
- (void)mergeFrame:(id)a0 and:(id)a1;
- (void)mergeFrameArray:(id)a0 and:(id)a1;
- (void).cxx_destruct;

@end
