@class NSString, LiveMessageListPinnedCellContentView;

@interface LiveMessageListPinnedCellView : IESLiveMessageListBaseCell <IESLiveMessageListCellActionProtocol>

@property (retain, nonatomic) LiveMessageListPinnedCellContentView *pinnedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)live_cellIdentifier;

- (void)refreshWith:(id)a0;
- (BOOL)actionPointInside:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
