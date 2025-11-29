@class BaseRequest, NSString, NSMutableArray;

@interface IssueNFCCardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSString *outOrderNo;
@property (retain, nonatomic) NSMutableArray *certificates;
@property (retain, nonatomic) NSString *signNonce;
@property (retain, nonatomic) NSString *nonce;

+ (void)initialize;

@end
