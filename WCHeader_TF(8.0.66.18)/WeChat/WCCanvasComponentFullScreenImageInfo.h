@class NSString;

@interface WCCanvasComponentFullScreenImageInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *fullScreenImageUrl;
@property (nonatomic) int scaleType;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
