@class NSData, NSString;

@interface TencentImageMessageObjV1 : TencentBaseMessageObj

@property (copy, nonatomic) NSData *dataImage;
@property (copy, nonatomic) NSData *dataThumbImage;
@property (copy, nonatomic) NSString *sUrl;
@property (copy, nonatomic) NSString *sDescription;
@property (nonatomic) struct CGSize { double width; double height; } szImage;
@property (readonly) long long nType;

- (BOOL)isVaild;
- (id)initWithImageUrl:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImageData:(id)a0;
- (void)dealloc;

@end
