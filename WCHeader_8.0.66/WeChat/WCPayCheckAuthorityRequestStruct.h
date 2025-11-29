@class NSString;

@interface WCPayCheckAuthorityRequestStruct : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *paySign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *stepInURL;
@property (nonatomic) long long m_enWCPayCheckAuthorityScene;
@property (nonatomic) int m_enWCPayCheckOpenWCPayViewAuthorityScene;
@property (retain, nonatomic) NSString *weAppUsername;
@property (retain, nonatomic) NSString *weAppPath;
@property (nonatomic) int JsApiSource;
@property (nonatomic) unsigned int payChannel;
@property (retain, nonatomic) NSString *commandWord;

- (void).cxx_destruct;

@end
