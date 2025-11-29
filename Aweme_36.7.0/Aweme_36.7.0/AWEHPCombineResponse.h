@class TTHttpResponse, NSString, NSDictionary, NSError;

@interface AWEHPCombineResponse : NSObject <AWEHPNetCombineResponseProtocol>

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) TTHttpResponse *httpResponse;
@property (retain, nonatomic) NSString *serverLogID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
