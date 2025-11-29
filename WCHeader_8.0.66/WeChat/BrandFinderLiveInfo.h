@class NSString, NSData, BrandLiveWeAppData;

@interface BrandFinderLiveInfo : NSObject <NSCoding, NSCopying, PBCoding>

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *finderFeedExportId;
@property (nonatomic) unsigned int lastRefreshTime;
@property (nonatomic) unsigned int refreshInterval;
@property (copy, nonatomic) NSString *lastEndFeedExportedId;
@property (copy, nonatomic) NSString *liveSquareTitle;
@property (nonatomic) unsigned int liveSquareScene;
@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) BOOL useWeapp;
@property (retain, nonatomic) BrandLiveWeAppData *weAppData;
@property (retain, nonatomic) NSString *finderSessionBuffer;
@property (retain, nonatomic) NSData *dataBuffer;
@property (copy, nonatomic) NSString *fromSessionIdInfo;
@property (copy, nonatomic) NSString *nonceId;
@property (copy, nonatomic) NSString *reportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_finderFeedExportId;
+ (void)PBArrayAdd_lastRefreshTime;
+ (void)PBArrayAdd_refreshInterval;
+ (void)PBArrayAdd_lastEndFeedExportedId;
+ (void)PBArrayAdd_liveSquareTitle;
+ (void)PBArrayAdd_liveSquareScene;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_useWeapp;
+ (void)PBArrayAdd_weAppData;
+ (void)PBArrayAdd_fromSessionIdInfo;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_reportInfo;
+ (void)initialize;
+ (id)fromRespLiveInfo:(id)a0;

- (id)toBizFinderLiveInfo;
- (id)toBizServiceFinderLiveInfo;
- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isLiving;
- (void).cxx_destruct;

@end
