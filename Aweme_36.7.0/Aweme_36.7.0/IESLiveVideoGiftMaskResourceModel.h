@class NSString, UIColor, UIImage;
@protocol MTLTexture, MTLBuffer;

@interface IESLiveVideoGiftMaskResourceModel : NSObject

@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) id content;
@property (nonatomic) long long sourceType;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSString *textSize;
@property (nonatomic) BOOL isBold;
@property (retain, nonatomic) UIImage *sourceImage;
@property (nonatomic) struct CGSize { double width; double height; } resourceSize;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) id<MTLBuffer> colorBuffer;

- (void).cxx_destruct;

@end
