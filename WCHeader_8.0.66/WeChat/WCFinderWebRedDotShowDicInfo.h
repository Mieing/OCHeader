@class NSString;

@interface WCFinderWebRedDotShowDicInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long showType;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned long long clearType;
@property (retain, nonatomic) NSString *parent;
@property (nonatomic) unsigned long long objectId;
@property (copy, nonatomic) NSString *objectNonceId;
@property (copy, nonatomic) NSString *byPassInfoString;
@property (copy, nonatomic) NSString *tipsUuid;
@property (nonatomic) unsigned long long ctrlInfoType;
@property (nonatomic) unsigned long long businessType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_clearType;
+ (void)PBArrayAdd_parent;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_byPassInfoString;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_ctrlInfoType;
+ (void)initialize;

@end
