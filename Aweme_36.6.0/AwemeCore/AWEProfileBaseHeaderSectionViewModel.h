@class NSString, AWEProfileBaseContainerContext;

@interface AWEProfileBaseHeaderSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWEProfileBaseContainerContext *context;
@property (nonatomic) BOOL showTabBubble;
@property (copy, nonatomic) NSString *tabBubbleText;
@property (nonatomic) long long tabBubbleIndex;
@property (nonatomic) BOOL isNeedShowCellBackgroundStatus;
@property (nonatomic) BOOL isNewFullScreenStyle;

+ (id)viewModel;

- (void).cxx_destruct;
- (void)updateWithContext:(id)a0;

@end
