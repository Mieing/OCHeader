@class NSMutableArray;
@protocol AWENewVideoCoverCommandStackDelegate;

@interface AWENewVideoCoverCommandStack : NSObject

@property (weak, nonatomic) id<AWENewVideoCoverCommandStackDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *mutableArray;

- (id)pop;
- (BOOL)empty;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)top;
- (long long)size;

@end
