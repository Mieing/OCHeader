@class BaseRequest, NSString, NSMutableArray;

@interface BizGetActionInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSMutableArray *actionKeyList;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *qrUrl;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;

+ (void)initialize;

@end
