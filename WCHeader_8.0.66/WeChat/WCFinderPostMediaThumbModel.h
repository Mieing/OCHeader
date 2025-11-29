@class NSString, WCFinderPostMediaLivePhotoVideoModel, WCFinderFullScreenEditRectModel;

@interface WCFinderPostMediaThumbModel : NSObject

@property (copy, nonatomic) NSString *mediaPath;
@property (copy, nonatomic) NSString *thumbPath;
@property (nonatomic) double originScore;
@property (nonatomic) double thumbScore;
@property (copy, nonatomic) NSString *fullScreenThumbPath;
@property (retain, nonatomic) WCFinderFullScreenEditRectModel *editRectModel;
@property (copy, nonatomic) NSString *halfMediaPath;
@property (nonatomic) int ratio;
@property (retain, nonatomic) WCFinderPostMediaLivePhotoVideoModel *livePhotoInfo;

- (id)genUploadLivePhotoMediaInfo;
- (void).cxx_destruct;

@end
