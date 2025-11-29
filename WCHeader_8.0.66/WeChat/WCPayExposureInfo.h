@class NSString, WCPayJumpInfo;

@interface WCPayExposureInfo : NSObject

@property (retain) NSString *icon;
@property (retain) NSString *name;
@property (retain) NSString *wording;
@property unsigned int is_show_btn;
@property (retain) NSString *btn_wording;
@property (retain) WCPayJumpInfo *jump_info;

+ (id)genFromUnion:(id)a0;

- (void).cxx_destruct;

@end
