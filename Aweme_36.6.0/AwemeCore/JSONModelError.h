@class NSData, NSHTTPURLResponse;

@interface JSONModelError : NSError

@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSData *responseData;

+ (id)errorInputIsNil;
+ (id)errorInvalidDataWithMessage:(id)a0;
+ (id)errorBadResponse;
+ (id)errorInvalidDataWithMissingKeys:(id)a0;
+ (id)errorInvalidDataWithTypeMismatch:(id)a0;
+ (id)errorBadJSON;
+ (id)errorModelIsInvalid;

- (id)errorByPrependingKeyPathComponent:(id)a0;
- (void).cxx_destruct;

@end
