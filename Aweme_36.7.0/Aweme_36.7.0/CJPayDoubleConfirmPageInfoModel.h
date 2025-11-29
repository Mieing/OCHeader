@class NSString, CJPaySwitchAreaInfoModel;

@interface CJPayDoubleConfirmPageInfoModel : JSONModel

@property (copy, nonatomic) NSString *bubbleDescText;
@property (copy, nonatomic) NSString *bubbleDescIconUrl;
@property (copy, nonatomic) NSString *buttonStyle;
@property (retain, nonatomic) CJPaySwitchAreaInfoModel *subButtonInfo;
@property (retain, nonatomic) CJPaySwitchAreaInfoModel *mainButtonInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
