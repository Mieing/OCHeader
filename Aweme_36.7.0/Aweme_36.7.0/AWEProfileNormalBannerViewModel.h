@class AWEProfileContext, NSDictionary, AWEProfileHeaderContext, AWEUserModel;

@interface AWEProfileNormalBannerViewModel : NSObject

@property (retain, nonatomic) AWEProfileHeaderContext *data;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, nonatomic) AWEUserModel *user;
@property (readonly, nonatomic) AWEProfileContext *profileContext;
@property (readonly, nonatomic) BOOL fromHomepage;
@property (readonly, nonatomic) NSDictionary *trackerParam;
@property (readonly, nonatomic) BOOL isVsOfficialAccount;

+ (id)viewModelWithData:(id)a0;

- (void).cxx_destruct;

@end
