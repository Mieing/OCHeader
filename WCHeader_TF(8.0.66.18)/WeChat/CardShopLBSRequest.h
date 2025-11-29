@class BaseRequest, NSString;

@interface CardShopLBSRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardTpId;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *cardId;

+ (void)initialize;

@end
