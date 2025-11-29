@class NSString, TTInstallGFCollector;

@interface TTInstallGFCollection : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) TTInstallGFCollector *value;

- (void).cxx_destruct;

@end
