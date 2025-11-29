@interface STCmdWrap : NSObject

@property (nonatomic) struct stCmd { unsigned int x0; unsigned int x1; unsigned int x2; } *pCmd;

+ (id)createInstance:(struct stCmd { unsigned int x0; unsigned int x1; unsigned int x2; })a0;

- (void)dealloc;

@end
