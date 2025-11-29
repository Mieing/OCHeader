@class NSString;

@interface AWECodeGenListenDiversionPopupDescModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *popupTitle;
@property (copy, nonatomic) NSString *popupSubTitle;
@property (copy, nonatomic) NSString *popupDesc;
@property (copy, nonatomic) NSString *popupBtnContentNewUser;
@property (copy, nonatomic) NSString *popupBtnContentOldUser;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
