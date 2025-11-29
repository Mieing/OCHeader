@interface AWENewVideoCoverChangeTextLayerAlignCommand : AWENewVideoCoverCommand

@property (nonatomic) long long originAWEStoryTextAlignmentStyle;
@property (nonatomic) long long nowAWEStoryTextAlignmentStyle;

- (void)realExecute;
- (void)realUnExecute;

@end
