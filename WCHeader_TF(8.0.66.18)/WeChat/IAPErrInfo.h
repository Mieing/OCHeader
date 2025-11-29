@class NSString;

@interface IAPErrInfo : NSObject

@property (nonatomic) unsigned int errCode;
@property (nonatomic) long long IAPErrCode;
@property (retain, nonatomic) NSString *IAPErrDesc;

- (void).cxx_destruct;

@end
