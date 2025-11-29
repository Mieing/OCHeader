@protocol WeMediaDelegate;

@interface WeMediaGlobal : NSObject {
    int weloglvl;
}

@property (weak, nonatomic) id<WeMediaDelegate> delegate;

+ (id)shareInstance;

- (id)init;
- (void)setLoglvl:(int)a0;
- (int)getLoglvl;
- (void).cxx_destruct;

@end
