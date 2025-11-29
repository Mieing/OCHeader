@class NSDictionary, NSString, NSError;

@interface AWEECommerceBridgeResult : NSObject

@property (retain, nonatomic) NSDictionary *forcedResult;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSDictionary *additionalDictinary;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSError *error;

- (id)IESJSBridgeResult;
- (void).cxx_destruct;

@end
