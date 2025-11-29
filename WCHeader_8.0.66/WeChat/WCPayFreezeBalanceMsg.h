@class NSString;

@interface WCPayFreezeBalanceMsg : NSObject <PBCoding>

@property (retain) NSString *wording;
@property unsigned long long wording_color;
@property unsigned long long wording_size;
@property unsigned long long bg_color;
@property (retain) NSString *route_url;
@property (retain) NSString *left_icon;
@property (retain) NSString *right_icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_wording_color;
+ (void)PBArrayAdd_wording_size;
+ (void)PBArrayAdd_bg_color;
+ (void)PBArrayAdd_route_url;
+ (void)PBArrayAdd_left_icon;
+ (void)PBArrayAdd_right_icon;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
