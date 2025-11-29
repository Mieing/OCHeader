@class HardWareRankMessageEntryButtonInfo;

@interface AppHardWareRankMessageViewModel : BaseMessageViewModel

@property (readonly, nonatomic) HardWareRankMessageEntryButtonInfo *entryButtonInfo;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (id)getChampionText:(double)a0 font:(id)a1;
- (BOOL)canShowTextStateEntry;
- (BOOL)canShowOlympic2024Entry;
- (void)onClickOlympic2024Button;
- (void).cxx_destruct;

@end
