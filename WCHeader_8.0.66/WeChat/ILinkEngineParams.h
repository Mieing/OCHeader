@class NSString, ConfAppInfo;

@interface ILinkEngineParams : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *subAppId;
@property (retain, nonatomic) ConfAppInfo *appInfo;
@property (copy, nonatomic) NSString *sessionKey;
@property (copy, nonatomic) NSString *idcInfo;

- (void).cxx_destruct;

@end
