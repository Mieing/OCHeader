@class NSDictionary, AWESearchCardCommentModel, AWESearchCardDiggModel, AWEAwemeModel, AWESearchCardShareModel, NSString, AWESearchCardFavorModel;

@interface AWESearchCardInteractorModel : NSObject

@property (retain, nonatomic) AWESearchCardDiggModel *diggModel;
@property (retain, nonatomic) AWESearchCardCommentModel *commentModel;
@property (retain, nonatomic) AWESearchCardFavorModel *favorModel;
@property (retain, nonatomic) AWESearchCardShareModel *shareModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *adEventName;
@property (nonatomic) double interactorWidth;
@property (nonatomic) double interactorHeight;
@property (nonatomic) BOOL hiddenDiggButton;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) long long diggCount;
@property (copy, nonatomic) NSDictionary *diggInteractLogExtra;
@property (nonatomic) BOOL hiddenCommentButton;
@property (nonatomic) long long commentCount;
@property (nonatomic) BOOL disableComment;
@property (copy, nonatomic) NSDictionary *commentInteractLogExtra;
@property (copy, nonatomic) NSDictionary *commentLogExtra;
@property (nonatomic) BOOL hiddenFavorButton;
@property (nonatomic) long long favorCount;
@property (nonatomic) BOOL userFavored;
@property (copy, nonatomic) NSDictionary *favorInteractLogExtra;
@property (nonatomic) BOOL hiddenShareButton;
@property (nonatomic) long long shareCount;
@property (copy, nonatomic) NSDictionary *shareInteractLogExtra;

- (void)configInteractorFrame;
- (void)configInteractorFrameWhenCommentOptEnable;
- (void).cxx_destruct;
- (id)init;

@end
