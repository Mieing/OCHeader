@class WCFinderMediaInfo, NSString, AVAsset, UIImage, NSMutableDictionary;

@interface MMMusicEditVideoCellModel : NSObject

@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) UIImage *localThumbImage;
@property (retain, nonatomic) AVAsset *slowMotionAvAsset;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (nonatomic) double musicStartTime;
@property (nonatomic) double musicEndTime;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (nonatomic) double cropStartPos;

- (void).cxx_destruct;

@end
