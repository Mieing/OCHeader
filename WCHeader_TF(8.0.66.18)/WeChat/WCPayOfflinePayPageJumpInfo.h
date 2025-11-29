@class NSString;

@interface WCPayOfflinePayPageJumpInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *icon_url;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *tiny_app_username;
@property (retain, nonatomic) NSString *tiny_app_path;
@property (retain, nonatomic) NSString *h5_url;
@property (nonatomic) int jump_type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_icon_url;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_tiny_app_username;
+ (void)PBArrayAdd_tiny_app_path;
+ (void)PBArrayAdd_h5_url;
+ (void)PBArrayAdd_jump_type;
+ (void)initialize;
+ (id)getJumpInfoCacheData;
+ (BOOL)saveJumpInfoCacheData:(id)a0;
+ (void)clearJumpInfoCacheData;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
