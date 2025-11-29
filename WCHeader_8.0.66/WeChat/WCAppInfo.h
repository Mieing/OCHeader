@class NSString;

@interface WCAppInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *installUrl;
@property (retain, nonatomic) NSString *fromUrl;
@property (nonatomic) BOOL isForceUpdate;
@property (nonatomic) BOOL clickable;
@property (nonatomic) BOOL isNewMusicStyle;
@property (nonatomic) BOOL isHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_appName;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_installUrl;
+ (void)PBArrayAdd_fromUrl;
+ (void)PBArrayAdd_isForceUpdate;
+ (void)PBArrayAdd_clickable;
+ (void)PBArrayAdd_isNewMusicStyle;
+ (void)PBArrayAdd_isHidden;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
