@class AWENewVideoCoverCommandStack;

@interface AWENewVideoCoverBatchRevertCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) AWENewVideoCoverCommandStack *commandStack;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
