@class NSString, AWEPzDomainModel;

@interface AWEPzDomainRegisterModel : NSObject

@property (copy, nonatomic) NSString *domainName;
@property (retain, nonatomic) AWEPzDomainModel *defaultConfig;
@property (nonatomic) BOOL needTrackComponent;

- (void).cxx_destruct;

@end
