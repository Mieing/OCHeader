@class NSString, NSDictionary;

@interface IESGurdRegisterModel : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *customParams;
@property (nonatomic) BOOL isRegister;

- (void).cxx_destruct;

@end
