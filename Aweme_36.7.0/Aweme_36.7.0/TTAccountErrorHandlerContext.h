@class NSError, TTHttpResponse, TTAccountHttpRequest;

@interface TTAccountErrorHandlerContext : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) TTAccountHttpRequest *request;
@property (retain, nonatomic) TTHttpResponse *response;
@property (retain, nonatomic) id jsonObj;
@property (nonatomic) BOOL fromSeconderayHandle;

- (void)finishWithErrorHandlerResult:(long long)a0;
- (void).cxx_destruct;

@end
