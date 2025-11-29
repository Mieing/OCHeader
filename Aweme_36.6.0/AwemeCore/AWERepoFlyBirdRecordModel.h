@class UIImage, NSString;
@protocol AWEStudioFlyBirdSelectionModel;

@interface AWERepoFlyBirdRecordModel : NSObject <NSCopying>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) id<AWEStudioFlyBirdSelectionModel> selectionModel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
