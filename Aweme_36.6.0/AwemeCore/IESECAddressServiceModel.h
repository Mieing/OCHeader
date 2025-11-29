@class NSDictionary, NSArray, NSError;

@interface IESECAddressServiceModel : NSObject

@property (copy, nonatomic) NSDictionary *rawResponse;
@property (copy, nonatomic) NSArray *addressList;
@property (retain, nonatomic) NSError *error;

- (id)toSimpleJson;
- (id)toSimpleJsonWithBizcode:(id)a0 filterList:(id)a1;
- (void).cxx_destruct;

@end
