@interface WCURLSessionConfiguration : NSObject

@property (nonatomic) BOOL useNewDns;
@property (nonatomic) BOOL shouldHandleRedirectBySelf;
@property (nonatomic) BOOL hanldeDataBySelf;
@property (nonatomic) BOOL enableSocketReuse;
@property (nonatomic) BOOL useSimpleDns;
@property (nonatomic) BOOL forceBindMobile;

- (id)init;

@end
