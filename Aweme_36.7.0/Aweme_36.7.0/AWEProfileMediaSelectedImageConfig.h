@class NSString, NSDictionary, UIImage, UIView, UIViewController;

@interface AWEProfileMediaSelectedImageConfig : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *noStickerImage;
@property (retain, nonatomic) UIView *sourceView;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isFirstReplace;
@property (nonatomic) BOOL enablePublishAvatarStory;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (retain, nonatomic) UIViewController *dismissViewController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
