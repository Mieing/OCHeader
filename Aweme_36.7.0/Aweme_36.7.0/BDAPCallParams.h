@class NSString, NSDictionary, NSDate, NSNumber;

@interface BDAPCallParams : NSObject

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *adId;
@property (copy, nonatomic) NSString *mKey;
@property (copy, nonatomic) NSString *reqId;
@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSString *siteId;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *phoneKey;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *instanceId;
@property (copy, nonatomic) NSString *realPhoneNum;
@property (retain, nonatomic) NSDate *dailTime;
@property (copy, nonatomic) NSNumber *scenario;
@property (copy, nonatomic) NSDictionary *gscenarioData;
@property (retain, nonatomic) NSNumber *dailActionType;
@property (copy, nonatomic) NSString *customFields;
@property (nonatomic) BOOL toListen;
@property (nonatomic) BOOL isWebCall;
@property (nonatomic) BOOL isAdEvent;
@property (copy, nonatomic) NSDictionary *cardData;
@property (copy, nonatomic) NSDictionary *extraNetParams;

- (id)initWithParamsBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
