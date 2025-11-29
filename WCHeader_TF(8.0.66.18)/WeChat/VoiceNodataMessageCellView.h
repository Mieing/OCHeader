@class VoiceNodataMessageViewModel;

@interface VoiceNodataMessageCellView : CommonMessageCellView

@property (readonly, nonatomic) VoiceNodataMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)updateStatus;

@end
