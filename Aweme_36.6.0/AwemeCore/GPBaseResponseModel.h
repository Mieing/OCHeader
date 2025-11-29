@class NSString, NSDictionary, NSError, NSNumber;

@interface GPBaseResponseModel : NSObject

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
