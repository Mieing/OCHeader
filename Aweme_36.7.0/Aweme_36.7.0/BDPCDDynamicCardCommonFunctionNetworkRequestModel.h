@class NSString, NSDictionary;

@interface BDPCDDynamicCardCommonFunctionNetworkRequestModel : NSObject

@property (copy, nonatomic) NSString *wholeUrl;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *postData;
@property (copy, nonatomic) NSDictionary *headerField;
@property (copy, nonatomic) NSString *cardSourceScene;

- (void).cxx_destruct;

@end
