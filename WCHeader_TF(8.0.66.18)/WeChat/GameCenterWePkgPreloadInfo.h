@class NSString;

@interface GameCenterWePkgPreloadInfo : NSObject

@property (retain, nonatomic) NSString *pkgId;
@property (nonatomic) long long displayTypeWithWePkg;
@property (nonatomic) unsigned int alwaysDisplayAfterTime;

- (void).cxx_destruct;

@end
