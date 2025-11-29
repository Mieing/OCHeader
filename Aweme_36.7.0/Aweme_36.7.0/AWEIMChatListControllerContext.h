@interface AWEIMChatListControllerContext : AWEIMComponentContext

@property (nonatomic) long long entryType;
@property (readonly, nonatomic) unsigned long long controllerDiffTag;

- (void)increaseDiffTag;

@end
