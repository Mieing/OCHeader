@class NSString;

@interface WCPayBalanceMenuItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long jump_type;
@property (copy, nonatomic) NSString *jump_h5_url;
@property (copy, nonatomic) NSString *tinyapp_username;
@property (copy, nonatomic) NSString *tinyapp_path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_jump_type;
+ (void)PBArrayAdd_jump_h5_url;
+ (void)PBArrayAdd_tinyapp_username;
+ (void)PBArrayAdd_tinyapp_path;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
