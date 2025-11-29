@class NSString;

@interface HBReq : BaseReq

@property (retain, nonatomic) NSString *nonceStr;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;

- (void).cxx_destruct;

@end
