@class NSDictionary, NSString;

@interface JSOpenFinderProductParam : NSObject

@property (retain, nonatomic) NSDictionary *dictLastAppInfo;
@property (retain, nonatomic) id referrerData;
@property (retain, nonatomic) id privateReferrerData;
@property (retain, nonatomic) NSDictionary *uiParam;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *productPathCookies;
@property (retain, nonatomic) NSString *shareProductAppId;
@property (retain, nonatomic) NSString *shareProductId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *ecSource;
@property (retain, nonatomic) NSDictionary *productExtraData;
@property (retain, nonatomic) NSString *entranceGMsgID;

- (void).cxx_destruct;

@end
