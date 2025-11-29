@class NSString;

@interface WCPayOfflinePayDisableBlockLayerTextInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *main_wording;
@property (retain, nonatomic) NSString *reminder_content;
@property (retain, nonatomic) NSString *action_btn_text;
@property (retain, nonatomic) NSString *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_main_wording;
+ (void)PBArrayAdd_reminder_content;
+ (void)PBArrayAdd_action_btn_text;
+ (void)PBArrayAdd_language;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
