@class AWESearchMusicSortTabCustomButton;
@protocol AWESearchMusicSortTabViewDelegate;

@interface AWESearchMusicSortTabViewCellContentView : UIView

@property (retain, nonatomic) AWESearchMusicSortTabCustomButton *listenMusicButton;
@property (retain, nonatomic) AWESearchMusicSortTabCustomButton *selectMusicButton;
@property (weak, nonatomic) id<AWESearchMusicSortTabViewDelegate> delegate;
@property (nonatomic) BOOL ishanging;

- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)selectMusicButtonClicked:(id)a0;
- (double)getRealScreenWidth;
- (void)listenMusicButtonClicked:(id)a0;
- (long long)currentSelectedMode;
- (void).cxx_destruct;
- (id)init;

@end
