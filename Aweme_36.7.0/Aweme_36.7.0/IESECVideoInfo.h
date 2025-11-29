@class NSString, NSNumber, UIImage;

@interface IESECVideoInfo : NSObject

@property (copy, nonatomic) NSString *videoMainPlayURL;
@property (copy, nonatomic) NSString *videoBackupPlayURL;
@property (copy, nonatomic) NSString *videoID;
@property (retain, nonatomic) NSNumber *videoWidth;
@property (retain, nonatomic) NSNumber *videoHeight;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *coverImageURL;
@property (nonatomic) BOOL needCookie;
@property (nonatomic) BOOL useV2Play;
@property (copy, nonatomic) NSString *apiStr;
@property (copy, nonatomic) NSString *localFilePath;
@property (retain, nonatomic) UIImage *localVideoCoverImage;

- (void).cxx_destruct;

@end
