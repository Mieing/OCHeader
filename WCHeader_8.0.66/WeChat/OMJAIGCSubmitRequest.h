@class NSString, NSArray, NSDictionary;

@interface OMJAIGCSubmitRequest : NSObject

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *templateID;
@property (copy, nonatomic) NSString *aigcServiceID;
@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSDictionary *dynamicParams;

- (id)initWithRequestID:(id)a0 templateID:(id)a1 aigcServiceID:(id)a2 dynamicParams:(id)a3 assets:(id)a4;
- (void).cxx_destruct;

@end
