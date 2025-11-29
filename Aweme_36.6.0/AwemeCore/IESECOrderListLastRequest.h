@class NSString, NSDictionary;

@interface IESECOrderListLastRequest : NSObject

@property (copy, nonatomic) NSString *nodeName;
@property (copy, nonatomic) NSString *triggerType;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) long long requestType;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;

+ (id)queryRequestWithParams:(id)a0 requestType:(long long)a1;
+ (id)uplinkRequestWithUplinkData:(id)a0;
+ (id)dictFromItem:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
