@interface ZXQRCodeECB : NSObject

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) int dataCodewords;

+ (id)ecbWithCount:(int)a0 dataCodewords:(int)a1;

- (id)initWithCount:(int)a0 dataCodewords:(int)a1;

@end
