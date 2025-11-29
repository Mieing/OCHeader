@class BaseRequest, NSString;

@interface GetEmotionDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) int version;

+ (void)initialize;

- (void)setVersion:(int)a0;
- (int)version;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setProductId:(id)a0;
- (id)productId;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
