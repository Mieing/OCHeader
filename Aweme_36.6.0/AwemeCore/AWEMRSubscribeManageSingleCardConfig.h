@class NSString, UIImage;

@interface AWEMRSubscribeManageSingleCardConfig : NSObject

@property (copy, nonatomic) NSString *imageUrl;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (copy, nonatomic) NSString *imageSceneTag;
@property (retain, nonatomic) UIImage *placeHolder;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;

@end
