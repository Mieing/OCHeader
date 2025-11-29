@class NSString;

@interface CJPay3DSAuthInfo : JSONModel

@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *deviceDataCollectionURL;
@property (copy, nonatomic) NSString *referenceID;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
