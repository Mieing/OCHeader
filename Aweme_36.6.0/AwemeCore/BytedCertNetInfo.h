@class NSString, NSArray, NSDictionary;

@interface BytedCertNetInfo : NSObject

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSArray *binaryDatas;
@property (copy, nonatomic) NSArray *binaryNames;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *headerField;
@property (copy, nonatomic) NSDictionary *multiPart;

- (void).cxx_destruct;

@end
