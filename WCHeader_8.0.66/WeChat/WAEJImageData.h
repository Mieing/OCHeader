@class NSMutableData, WAEJTexture;

@interface WAEJImageData : NSObject {
    WAEJTexture *innerTexture;
}

@property (readonly, nonatomic) WAEJTexture *texture;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) NSMutableData *pixels;

- (id)initWithWidth:(int)a0 height:(int)a1 pixels:(id)a2;
- (void)dealloc;

@end
