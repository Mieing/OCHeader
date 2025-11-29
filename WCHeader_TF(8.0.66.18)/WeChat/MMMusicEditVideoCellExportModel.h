@class NSString, UIImage, NSMutableDictionary;

@interface MMMusicEditVideoCellExportModel : NSObject

@property (retain, nonatomic) NSString *localVideoPath;
@property (retain, nonatomic) UIImage *localThumbImage;
@property (nonatomic) double videoCropStartTime;
@property (nonatomic) double videoCropEndTime;
@property (retain, nonatomic) NSMutableDictionary *extInfo;

- (void).cxx_destruct;

@end
