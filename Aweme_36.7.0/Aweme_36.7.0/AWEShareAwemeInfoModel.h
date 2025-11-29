@class NSString, AWEUserModel, AWEAwemeModel;

@interface AWEShareAwemeInfoModel : NSObject

@property (retain, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AWEUserModel *originalAuthor;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (nonatomic) BOOL awemeIsLongItem;
@property (nonatomic) BOOL isFirstLandscape;
@property (nonatomic) BOOL authorIsCurrentUser;
@property (copy, nonatomic) NSString *momentType;
@property (nonatomic) BOOL authorIsPrivateAccount;

- (void).cxx_destruct;

@end
