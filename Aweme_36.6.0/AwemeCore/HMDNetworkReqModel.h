@class NSString, NSDictionary, NSData;
@protocol HMDJSONObjectProtocol;

@interface HMDNetworkReqModel : NSObject

@property (copy, nonatomic) NSString *requestURL;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *headerField;
@property (copy, nonatomic) id<HMDJSONObjectProtocol> params;
@property (nonatomic) BOOL needEcrypt;
@property (nonatomic) BOOL isManualTriggered;
@property (retain, nonatomic) NSData *postData;
@property (nonatomic) BOOL isFromHermas;

- (void).cxx_destruct;

@end
