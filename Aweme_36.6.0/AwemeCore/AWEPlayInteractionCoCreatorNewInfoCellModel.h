@class NSArray, NSString, UIImage, AWECoCreatorLiveModel;

@interface AWEPlayInteractionCoCreatorNewInfoCellModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *imageUrls;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL showFollowStatus;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tagName;
@property (retain, nonatomic) AWECoCreatorLiveModel *liveModel;

- (void).cxx_destruct;

@end
