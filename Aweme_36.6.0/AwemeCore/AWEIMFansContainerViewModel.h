@class AWEIMFansPostWorkListViewModel, AWEIMFansEnterProfileViewModel, AWEFollowNoticeContext, AWEIMFansSyncContactRemarkViewModel, AWEIMFansDataViewModel, NSMutableDictionary, AWEIMFansListFoldViewModel, NSMutableSet, AWEIMFansFollowRequestAlertViewModel, AWEIMFansDeleteNoticeViewModel, AWEIMFansUserMessageViewModel, AWEIMFansRecommendViewModel;

@interface AWEIMFansContainerViewModel : NSObject

@property (retain, nonatomic) AWEFollowNoticeContext *context;
@property (retain, nonatomic) NSMutableSet *trackedShowUIDs;
@property (retain, nonatomic) AWEIMFansListFoldViewModel *foldViewModel;
@property (retain, nonatomic) AWEIMFansEnterProfileViewModel *enterProfileViewModel;
@property (retain, nonatomic) AWEIMFansDataViewModel *dataViewModel;
@property (retain, nonatomic) AWEIMFansSyncContactRemarkViewModel *contactViewModel;
@property (retain, nonatomic) AWEIMFansRecommendViewModel *recommendViewModel;
@property (retain, nonatomic) AWEIMFansDeleteNoticeViewModel *deleteViewModel;
@property (retain, nonatomic) AWEIMFansFollowRequestAlertViewModel *followRequestAlertViewModel;
@property (retain, nonatomic) AWEIMFansPostWorkListViewModel *postWorkViewModel;
@property (retain, nonatomic) AWEIMFansUserMessageViewModel *userMessageViewModel;
@property (retain, nonatomic) NSMutableDictionary *viewModels;

+ (BOOL)enableRefactorFansNotice;

- (void)setupSubViewModels;
- (void)setViewModelByClass:(id)a0;
- (id)viewModelOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)init;

@end
