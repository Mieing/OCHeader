@class NSArray, NSDictionary, AWEAwemeModel, NSString;

@interface AWEDetailNewTrendVideoCellModel : NSObject

@property (nonatomic) BOOL isSkeletonModeStatus;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *coverPhotoUrls;
@property (copy, nonatomic) NSDictionary *videoUrlInfo;
@property (copy, nonatomic) NSArray *avatarUrls;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *likeCountContent;
@property (copy, nonatomic) id /* block */ didSelectItemActionBlock;
@property (copy, nonatomic) id /* block */ dynamicCalculateColorActionBlock;

- (void).cxx_destruct;

@end
