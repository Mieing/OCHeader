@class JLRPNFCMessageModel;

@interface JLRPLocalizableManager : NSObject

@property (retain, nonatomic) JLRPNFCMessageModel *currentModel;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
