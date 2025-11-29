@class NSString, NSDictionary;

@interface ReportObj13980 : NSObject

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) NSString *pkgVersion;
@property (nonatomic) int resultCode;
@property (nonatomic) unsigned long long beginTimeTemp;
@property (nonatomic) unsigned int costTime;
@property (retain, nonatomic) NSDictionary *extInfo;

- (id)init;
- (id)toLogExt;
- (void).cxx_destruct;

@end
