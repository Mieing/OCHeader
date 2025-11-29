@class GameShareDataTailInfo, NSString, NSDictionary, GameShareDataImageModel;

@interface MMWebViewControllerGameShareData : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSDictionary *reportExtInfo;
@property (copy, nonatomic) NSString *fromScene;
@property (copy, nonatomic) NSString *floatBallTitle;
@property (nonatomic) BOOL needUploadFirst;
@property (copy, nonatomic) NSString *videoId;
@property (retain, nonatomic) GameShareDataTailInfo *tailInfo;
@property (retain, nonatomic) GameShareDataImageModel *imageModel;
@property (nonatomic) int shareType;

- (id)description;
- (void).cxx_destruct;

@end
