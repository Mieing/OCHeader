@class NSString;

@interface TIMXDBEncryptConfig : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *sourceDBPath;
@property (copy, nonatomic) NSString *encDBPath;

- (void).cxx_destruct;

@end
