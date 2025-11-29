@class NSString, ZimAliCloudInitResponse;

@interface ZimNetworkResult : NSObject

@property (retain, nonatomic) ZimAliCloudInitResponse *ResultObject;
@property (retain, nonatomic) NSString *RequestId;
@property (retain, nonatomic) NSString *Code;
@property (retain, nonatomic) NSString *Success;
@property (retain, nonatomic) NSString *Message;

- (void).cxx_destruct;
- (id)init;

@end
