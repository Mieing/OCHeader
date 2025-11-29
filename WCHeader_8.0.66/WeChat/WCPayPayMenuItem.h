@class NSString;

@interface WCPayPayMenuItem : NSObject <PBCoding>

@property (nonatomic) int paymenu_jump_type;
@property (retain, nonatomic) NSString *paymenu_jump_url;
@property (retain, nonatomic) NSString *paymenu_username;
@property (retain, nonatomic) NSString *paymenu_path;
@property (retain, nonatomic) NSString *paymenu_title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_paymenu_jump_type;
+ (void)PBArrayAdd_paymenu_jump_url;
+ (void)PBArrayAdd_paymenu_username;
+ (void)PBArrayAdd_paymenu_path;
+ (void)PBArrayAdd_paymenu_title;
+ (void)initialize;
+ (id)genFromDictionary:(id)a0;

@end
