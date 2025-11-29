@class NSString, NSURL, UIImage;

@interface BUPlayerItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *videoURL_H264_Remote;
@property (retain, nonatomic) NSURL *videoURL_H264_Local;
@property (retain, nonatomic) NSURL *videoURL_H265_Remote;
@property (retain, nonatomic) NSURL *videoURL_H265_Local;
@property (nonatomic) BOOL enableH265;
@property (nonatomic) BOOL enableH265DowngradePlay;
@property (nonatomic) BOOL enableH264DowngradePlay;
@property (nonatomic) BOOL enableCache;
@property (copy, nonatomic) NSString *placeholderImageURLString;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) long long placeholderImageContentMode;
@property (nonatomic) long long seekTime;

- (void).cxx_destruct;

@end
