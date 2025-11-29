@class NSString;

@interface WCTSettingModel : WCTBaseSettingModel

@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL showArrow;

+ (id)createWithTitle:(id)a0 subTitle:(id)a1;
+ (id)createWithTitle:(id)a0 subTitle:(id)a1 showArrow:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;

@end
