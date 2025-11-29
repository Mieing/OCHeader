@class NSString, UIImage;

@interface AWENormalModeTabBarIconDownloadResult : NSObject

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *selectedImage;

- (void).cxx_destruct;

@end
