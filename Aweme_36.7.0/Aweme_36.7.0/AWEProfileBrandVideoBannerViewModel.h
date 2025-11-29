@class NSString, AWEUserModel;

@interface AWEProfileBrandVideoBannerViewModel : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *creativeID;
@property (readonly, nonatomic) NSString *pullText;
@property (readonly, nonatomic) BOOL isCurrentUser;

+ (id)viewModelWithData:(id)a0;

- (void)configAwemeModel:(id)a0;
- (void)_processData;
- (void).cxx_destruct;
- (id)initWithUserData:(id)a0;

@end
