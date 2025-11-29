@class NSString, SecurityDialogButtonInfo;

@interface PaySecurityDialogInfo : NSObject

@property (retain) NSString *title;
@property (retain) NSString *logo;
@property (retain) NSString *wording;
@property (retain) SecurityDialogButtonInfo *left_btn;
@property (retain) SecurityDialogButtonInfo *right_btn;

+ (id)GenFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
