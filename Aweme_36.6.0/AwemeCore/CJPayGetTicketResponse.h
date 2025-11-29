@class NSString;

@interface CJPayGetTicketResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL isSigned;
@property (copy, nonatomic) NSString *agreementUrl;
@property (copy, nonatomic) NSString *agreementDesc;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *liveRoute;
@property (copy, nonatomic) NSString *protocolCheckBox;
@property (copy, nonatomic) NSString *faceScene;
@property (copy, nonatomic) NSString *compareInCert;
@property (copy, nonatomic) NSString *asyncInvokeResult;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (unsigned long long)getEnterFromValue;
- (id)getLiveRouteTrackStr;
- (void).cxx_destruct;

@end
