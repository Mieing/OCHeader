@class NSString;

@interface CJPayServiceDescPopup : JSONModel

@property (copy, nonatomic) NSString *popupTitle;
@property (copy, nonatomic) NSString *popupBody;
@property (copy, nonatomic) NSString *popupButtonDesc;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
