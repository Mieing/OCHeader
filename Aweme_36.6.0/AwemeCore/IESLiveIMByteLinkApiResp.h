@class NSData, NSMutableDictionary, NSString;

@interface IESLiveIMByteLinkApiResp : NSObject

@property (nonatomic) long long serviceID;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSString *statusMsg;

- (void).cxx_destruct;

@end
