@class NSString;

@interface KindaLiteReportData35075 : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) long long reportType;
@property (nonatomic) long long usecase;
@property (nonatomic) long long scene;
@property (nonatomic) long long duration;
@property (nonatomic) long long isReg;
@property (copy, nonatomic) NSString *transactionid;
@property (copy, nonatomic) NSString *reqKey;
@property (nonatomic) long long price;
@property (nonatomic) long long channel;
@property (nonatomic) long long reportComponent;
@property (nonatomic) long long reportAction;
@property (nonatomic) long long reportActionResult;
@property (nonatomic) long long routeType;
@property (nonatomic) long long pageDidBackType;
@property (nonatomic) long long cmdType;
@property (nonatomic) long long cmdId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *currentRoute;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *liteappVersion;
@property (copy, nonatomic) NSString *baseLibVersion;
@property (copy, nonatomic) NSString *routeInfo;
@property (copy, nonatomic) NSString *extraString;
@property (nonatomic) long long extraNumber;
@property (copy, nonatomic) NSString *valueString;
@property (copy, nonatomic) NSString *usecaseUrl;
@property (nonatomic) long long sequence;
@property (nonatomic) long long localTime;
@property (copy, nonatomic) NSString *env;
@property (copy, nonatomic) NSString *uatId;

+ (id)create;

- (id)init;
- (id)copy;
- (void).cxx_destruct;

@end
