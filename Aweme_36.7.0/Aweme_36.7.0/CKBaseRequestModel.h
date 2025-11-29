@class NSString, NSDictionary;

@interface CKBaseRequestModel : NSObject

@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *urlPath;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *urlQueryParams;

- (void).cxx_destruct;

@end
