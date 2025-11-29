@class NSString, AWECodeGenInteractiveDisableDialogModel;

@interface AWECodeGenInteractiveDisableInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *disableDetails;
@property (retain, nonatomic) AWECodeGenInteractiveDisableDialogModel *disableDialogInfoModel;
@property (nonatomic) BOOL hasEntrance;
@property (nonatomic) BOOL disableLeftSlide;
@property (copy, nonatomic) NSString *selectOptionText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
