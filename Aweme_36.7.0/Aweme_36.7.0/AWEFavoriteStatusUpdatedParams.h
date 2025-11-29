@class NSString, AWEAwemeModel;

@interface AWEFavoriteStatusUpdatedParams : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL toastShowAddCollects;
@property (copy, nonatomic) NSString *recommendCollectionFolderName;
@property (nonatomic) BOOL shouldBlockSnackBar;
@property (nonatomic) BOOL isFromInteractionButton;
@property (nonatomic) BOOL hasFolderCache;

- (void).cxx_destruct;

@end
