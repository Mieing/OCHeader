@interface AWEMusicDetailEmptyTipSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) long long failType;

- (void)setupMusicDetailFailType:(long long)a0;
- (void)showEmptyTipView;
- (void)removeEmptyTipView;
- (id)init;

@end
