@class NSString;

@interface AWEGuestFollowListSectionViewModel : AWEBaseListSectionViewModel

@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) BOOL isFollowRequestOnAir;
@property (copy, nonatomic) id /* block */ loadMoreBlock;

+ (id)viewModelWithModelsArray:(id)a0 loadMoreBlock:(id /* block */)a1;

- (void)requestFollowWithUser:(id)a0;
- (void)enterUserProfileWithModel:(id)a0;
- (void)prefetchIfNeededWithIndex:(long long)a0;
- (BOOL)isInvalidAccount:(id)a0;
- (void).cxx_destruct;

@end
