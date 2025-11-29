@class NSString, NSDictionary, NSData;

@interface HMRequestModel : NSObject

@property (nonatomic) BOOL needEcrypt;
@property (copy, nonatomic) NSString *requestURL;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) NSDictionary *headerField;
@property (retain, nonatomic) NSData *postData;

- (void).cxx_destruct;

@end
