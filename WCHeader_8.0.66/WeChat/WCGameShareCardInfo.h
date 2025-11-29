@class WCGameShareLiteAppExtInfo, NSString, WCGameShareAppBrandExtInfo;

@interface WCGameShareCardInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) WCGameShareLiteAppExtInfo *liteAppExtInfo;
@property (retain, nonatomic) WCGameShareAppBrandExtInfo *appBrandExtInfo;
@property (copy, nonatomic) NSString *gameShareId;
@property (copy, nonatomic) NSString *gameShareData;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int duration;
@property (copy, nonatomic) NSString *readText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liteAppExtInfo;
+ (void)PBArrayAdd_gameShareId;
+ (void)PBArrayAdd_gameShareData;
+ (void)PBArrayAdd_isVideo;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_readText;
+ (void)PBArrayAdd_appBrandExtInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
