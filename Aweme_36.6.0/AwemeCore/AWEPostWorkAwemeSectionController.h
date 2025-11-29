@interface AWEPostWorkAwemeSectionController : AWEUserWorkAwemeSectionController

@property (nonatomic) BOOL customStyleNotLoginShowed;

+ (Class)sectionViewModelClass;
+ (BOOL)isCurrentVideo:(id)a0 userWorkContext:(id)a1;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (id)paramDict;
- (id)justWatched;
- (void)configComponentCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configProfileCustomCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configProfileLiveCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configProfileDraftCell:(id)a0 index:(long long)a1 model:(id)a2;
- (BOOL)isVideoUnread:(id)a0;
- (BOOL)isCurrentVideo:(id)a0;
- (BOOL)isMomentAndSortTypeTime;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (id)init;
- (id)dataManager;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
