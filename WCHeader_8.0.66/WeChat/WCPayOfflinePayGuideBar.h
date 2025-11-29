@class NSString, WCPayOfflinePayGuideData;

@interface WCPayOfflinePayGuideBar : NSObject <PBCoding>

@property (nonatomic) unsigned int guide_type;
@property (retain, nonatomic) WCPayOfflinePayGuideData *guide_data;
@property (nonatomic) unsigned int is_show_guide;
@property (retain, nonatomic) NSString *guide_content;
@property (retain, nonatomic) NSString *guide_content_color;
@property (retain, nonatomic) NSString *guide_btn_text;
@property (retain, nonatomic) NSString *guide_btn_text_color;
@property (retain, nonatomic) NSString *guide_btn_bg_color;
@property (retain, nonatomic) NSString *guide_logo;
@property (retain, nonatomic) NSString *background_color;
@property (retain, nonatomic) NSString *attach_info_left_wording;
@property (retain, nonatomic) NSString *attach_info_right_wording;
@property (nonatomic) unsigned int btn_jump_mode;
@property (retain, nonatomic) NSString *btn_jump_h5;
@property (retain, nonatomic) NSString *btn_jump_tinyapp_username;
@property (retain, nonatomic) NSString *btn_jump_tinyapp_path;
@property (retain, nonatomic) NSString *dark_guide_btn_text_color;
@property (retain, nonatomic) NSString *dark_guide_btn_bg_color;
@property (retain, nonatomic) NSString *dark_background_color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_guide_type;
+ (void)PBArrayAdd_guide_data;
+ (void)PBArrayAdd_is_show_guide;
+ (void)PBArrayAdd_guide_content;
+ (void)PBArrayAdd_guide_content_color;
+ (void)PBArrayAdd_guide_btn_text;
+ (void)PBArrayAdd_guide_btn_text_color;
+ (void)PBArrayAdd_guide_btn_bg_color;
+ (void)PBArrayAdd_guide_logo;
+ (void)PBArrayAdd_background_color;
+ (void)PBArrayAdd_attach_info_left_wording;
+ (void)PBArrayAdd_attach_info_right_wording;
+ (void)PBArrayAdd_btn_jump_mode;
+ (void)PBArrayAdd_btn_jump_h5;
+ (void)PBArrayAdd_btn_jump_tinyapp_username;
+ (void)PBArrayAdd_btn_jump_tinyapp_path;
+ (void)PBArrayAdd_dark_guide_btn_text_color;
+ (void)PBArrayAdd_dark_guide_btn_bg_color;
+ (void)PBArrayAdd_dark_background_color;
+ (void)initialize;
+ (id)getLocalOfflinePayGuideBarData;
+ (BOOL)saveOfflinePayGuideBarData:(id)a0;
+ (void)removeOfflinePayGuideBarData;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
