@class NSString, NSDictionary, NSArray;

@interface BDXBridgeUploadFileParam : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSArray *formDataBody;
@property (nonatomic) BOOL needCommonParams;

- (void).cxx_destruct;

@end
