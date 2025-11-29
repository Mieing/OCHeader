@interface AWELongVideoPixel : NSObject

@property (nonatomic) unsigned char redValue;
@property (nonatomic) unsigned char greenValue;
@property (nonatomic) unsigned char blueValue;

- (id)initWithDataArray:(char *)a0 startIndex:(unsigned long long)a1 dataLength:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;

@end
