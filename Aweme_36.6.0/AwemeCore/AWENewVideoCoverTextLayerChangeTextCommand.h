@class NSString;

@interface AWENewVideoCoverTextLayerChangeTextCommand : AWENewVideoCoverCommand

@property (copy, nonatomic) NSString *originContent;
@property (copy, nonatomic) NSString *nowContent;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
