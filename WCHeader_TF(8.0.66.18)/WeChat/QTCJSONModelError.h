@class NSData, NSHTTPURLResponse;

@interface QTCJSONModelError : NSError

@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSData *responseData;

+ (id)errorInvalidDataWithMessage:(id)a0;
+ (id)errorInvalidDataWithMissingKeys:(id)a0;
+ (id)errorInvalidDataWithTypeMismatch:(id)a0;
+ (id)errorBadResponse;
+ (id)errorBadJSON;
+ (id)errorModelIsInvalid;
+ (id)errorInputIsNil;

- (id)errorByPrependingKeyPathComponent:(id)a0;
- (void).cxx_destruct;

@end
