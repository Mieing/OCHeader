@class NSMutableArray;

@interface AWENewVideoCoverChangeTextTemplateLayerAlignCommand : AWENewVideoCoverCommand

@property (retain, nonatomic) NSMutableArray *originAWEStoryTextAlignmentStyles;
@property (nonatomic) long long nowAWEStoryTextAlignmentStyle;

- (void)realExecute;
- (void)realUnExecute;
- (void).cxx_destruct;

@end
