@class NSString, NSArray, NSNumber;

@interface AWEGCPAwemeModel : NSObject

@property (nonatomic) long long strategyViewStyle;
@property (nonatomic) BOOL isFromTabStrategy;
@property (retain, nonatomic) id awemeModel;
@property (nonatomic) int contentType;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *mixId;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *avatarImageUrlList;
@property (retain, nonatomic) NSNumber *createTime;
@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSNumber *imageTextCount;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *viewerNumbers;
@property (retain, nonatomic) NSNumber *diggCount;
@property (retain, nonatomic) NSNumber *favoriteCount;
@property (retain, nonatomic) NSNumber *commentCount;
@property (retain, nonatomic) NSNumber *shareCount;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) BOOL userFavorited;
@property (nonatomic) BOOL disableComment;
@property (nonatomic) BOOL disableShare;

- (void).cxx_destruct;

@end
