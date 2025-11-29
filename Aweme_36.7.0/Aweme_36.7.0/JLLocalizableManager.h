@class NSString, JLNFCMessageModel;

@interface JLLocalizableManager : NSObject

@property (copy, nonatomic) NSString *leLanguages;
@property (retain, nonatomic) JLNFCMessageModel *currentModel;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
