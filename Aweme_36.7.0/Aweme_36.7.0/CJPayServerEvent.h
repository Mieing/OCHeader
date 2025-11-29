@class NSString, NSDictionary;

@interface CJPayServerEvent : JSONModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *intergratedMerchantId;

- (id)toStrForUpload;
- (void).cxx_destruct;

@end
