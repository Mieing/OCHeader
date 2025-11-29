@class NSString, AWEAwemeModel;

@interface AWEFavoriteFileAddOrCreateConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL alwaysShowFavoritesPopup;
@property (copy, nonatomic) NSString *toastType;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isFromCommentRedButton;
@property (nonatomic) BOOL shouldBlockNoticeView;

- (void).cxx_destruct;

@end
