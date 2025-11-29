@class UIImage, NSDictionary;
@protocol ACCAIEmojiStyleModelProtocol;

@interface AWEIMAIEmojiGeneratePageViewControllerContext : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id<ACCAIEmojiStyleModelProtocol> artStyle;
@property (retain, nonatomic) id detectData;
@property (nonatomic) BOOL isRetake;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) NSDictionary *routerParams;

- (void).cxx_destruct;

@end
