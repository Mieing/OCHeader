@class NSError, NSString, AWEFavoriteFolderVideoListInfoModel, AWEFavoriteFolderAuthorModel, NSNumber, AWEURLModel;

@interface AWEFavoriteFolderBaseInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *favoriteFolderName;
@property (retain, nonatomic) AWEURLModel *favoriteFolderCover;
@property (retain, nonatomic) NSNumber *favoriteFolderID;
@property (retain, nonatomic) NSNumber *states;
@property (retain, nonatomic) NSNumber *totalItemsNumber;
@property (retain, nonatomic) NSNumber *authorID;
@property (nonatomic) BOOL isSecret;
@property (nonatomic) unsigned long long followStatus;
@property (nonatomic) BOOL isNormalStatus;
@property (nonatomic) unsigned long long systemType;
@property (retain, nonatomic) AWEFavoriteFolderAuthorModel *author;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long reviewStatus;
@property (nonatomic) unsigned long long filterReason;
@property (retain, nonatomic) NSError *fetchInfoError;
@property (nonatomic) long long followedCount;
@property (nonatomic) long long playCount;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) AWEFavoriteFolderVideoListInfoModel *videoListInfo;
@property (nonatomic) BOOL isDefaultCover;

+ (id)authorJSONTransformer;
+ (id)videoListInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isFollowedFavoriteFolder;
- (BOOL)isUnfollowedFavoriteFolder;
- (void).cxx_destruct;

@end
