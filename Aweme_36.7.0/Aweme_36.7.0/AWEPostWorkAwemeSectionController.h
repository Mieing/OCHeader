@interface AWEPostWorkAwemeSectionController : AWEUserWorkAwemeSectionController

@property (nonatomic) BOOL customStyleNotLoginShowed;

+ (Class)sectionViewModelClass;
+ (BOOL)isVideoUnread:(id)a0 profileContext:(id)a1;
+ (BOOL)isCurrentVideo:(id)a0 userWorkContext:(id)a1;
+ (void)configComponentCell:(id)a0 model:(id)a1 indexPath:(id)a2 maskViewTitle:(id)a3 userWorkContext:(id)a4 viewModelPool:(id)a5;
+ (unsigned long long)recommendSectionJustWatchAvoidStyle:(id)a0;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (BOOL)shouldHidePostWorkCellJustWatchMask;
- (id)postViewController;
- (void)configProfileCustomCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configProfileLiveCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configProfileDraftCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)recommendSectionViewModel;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)dataController;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
