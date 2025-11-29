@class UIImage, NSString, NSDictionary;

@interface AWEIMLongPressContext : NSObject

@property (nonatomic) long long sceneType;
@property (nonatomic) long long downloaderType;
@property (retain, nonatomic) UIImage *currentImage;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
