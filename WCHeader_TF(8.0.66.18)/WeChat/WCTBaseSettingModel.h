@class NSString;

@interface WCTBaseSettingModel : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL disableSelect;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) long long tag;
@property (nonatomic) unsigned long long accessibilityTraits;

+ (id)createWithTitle:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
