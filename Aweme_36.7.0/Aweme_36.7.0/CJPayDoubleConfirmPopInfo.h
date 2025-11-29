@class NSString, CJPaySwitchAreaInfoModel;

@interface CJPayDoubleConfirmPopInfo : JSONModel

@property (copy, nonatomic) NSString *pageDescText;
@property (copy, nonatomic) NSString *pageDescIcon;
@property (copy, nonatomic) NSString *popType;
@property (copy, nonatomic) CJPaySwitchAreaInfoModel *mainButtonInfo;
@property (copy, nonatomic) CJPaySwitchAreaInfoModel *subButtonInfo;
@property (copy, nonatomic) CJPaySwitchAreaInfoModel *cancelButtonInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
