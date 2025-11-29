@class NSString;

@interface SecurityBannerMsg : NSObject <PBCoding>

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *linkName;
@property (retain, nonatomic) NSString *linkSrc;
@property (nonatomic) unsigned int expireTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_linkName;
+ (void)PBArrayAdd_linkSrc;
+ (void)PBArrayAdd_expireTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
