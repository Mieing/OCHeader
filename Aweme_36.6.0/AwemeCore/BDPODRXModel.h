@class NSString, BDPODRXFileBasicModel, BDPPackageInfo;

@interface BDPODRXModel : NSObject <BDPODRXResolveInformation>

@property (copy, nonatomic) NSString *pkgPath;
@property (retain, nonatomic) BDPODRXFileBasicModel *basic;
@property (retain, nonatomic) BDPPackageInfo *pkgInfo;
@property (nonatomic) long long dbReadType;
@property (nonatomic) long long firstReadType;
@property (nonatomic) BOOL isFirstOpen;
@property (nonatomic) long long triggerFrom;
@property (copy, nonatomic) NSString *odrTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)uniqueId;
- (long long)priority;
- (id)urls;
- (id)identifier;
- (long long)appType;
- (long long)readType;

@end
