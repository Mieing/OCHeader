@class NSString, NSURLResponse, NSMutableData, NSURLRequest, NSDate;

@interface GCRequestModel : NSObject

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSDate *requestDate;
@property (retain, nonatomic) NSMutableData *data;
@property (retain, nonatomic) NSURLResponse *response;
@property (retain, nonatomic) NSString *webviewKey;

- (id)init;
- (void).cxx_destruct;

@end
