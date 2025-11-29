@class AWEActivityStartupPopupFEModel, NSString, NSDictionary, AWEActivityStartupPopupModel;

@interface AWEStartupPopupStructModel : AWEBaseApiModel

@property (retain, nonatomic) AWEActivityStartupPopupModel *universalPopup;
@property (nonatomic) unsigned long long showType;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWEActivityStartupPopupFEModel *fePopup;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) double getDate;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
