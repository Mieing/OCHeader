@class NSString;

@interface WCPayOfflinePayEnablePageData : NSObject <PBCoding>

@property (nonatomic) unsigned int is_need_show;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_is_need_show;
+ (void)PBArrayAdd_icon;
+ (void)PBArrayAdd_text;
+ (void)PBArrayAdd_button;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
