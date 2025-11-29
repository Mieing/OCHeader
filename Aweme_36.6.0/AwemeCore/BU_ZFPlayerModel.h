@class UIView, NSString, NSURL, UIImage, UIScrollView, NSDictionary, NSBundle, NSIndexPath;

@interface BU_ZFPlayerModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *videoURL_H264_Remote;
@property (retain, nonatomic) NSURL *videoURL_H264_Local;
@property (retain, nonatomic) NSURL *videoURL_H265_Remote;
@property (retain, nonatomic) NSURL *videoURL_H265_Local;
@property (nonatomic) BOOL enableH265;
@property (nonatomic) BOOL enableH265DowngradePlay;
@property (nonatomic) BOOL enableH264DowngradePlay;
@property (nonatomic) BOOL enableCache;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (weak, nonatomic) UIView *fatherView;
@property (copy, nonatomic) NSString *placeholderImageURLString;
@property (nonatomic) long long placeholderImageContentMode;
@property (nonatomic) long long seekTime;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) long long fatherViewTag;
@property (retain, nonatomic) NSBundle *resourceBundle;
@property (retain, nonatomic) NSDictionary *resourceIcons;
@property (retain, nonatomic) NSDictionary *resourceLocalizedStrings;

- (void).cxx_destruct;

@end
