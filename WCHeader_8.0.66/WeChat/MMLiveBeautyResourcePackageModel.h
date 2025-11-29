@class NSString;

@interface MMLiveBeautyResourcePackageModel : NSObject

@property (nonatomic) unsigned long long packageType;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *md5Hash;
@property (retain, nonatomic) NSString *masterId;
@property (retain, nonatomic) NSString *masterPath;
@property (retain, nonatomic) NSString *manifestPath;
@property (retain, nonatomic) NSString *instancePath;
@property (retain, nonatomic) NSString *configurationPath;

+ (id)packageWithType:(unsigned long long)a0 uri:(id)a1 md5Hash:(id)a2;

- (id)initWithPackageType:(unsigned long long)a0 uri:(id)a1 md5Hash:(id)a2;
- (id)createFetcherTask;
- (void).cxx_destruct;

@end
