@class NSNumber, IESIMGroupHintNoticeModel, IESIMGroupConfirmPageConfig;

@interface IESIMGroupUpgradeConfirmPageConfigModel : NSObject

@property (retain, nonatomic) IESIMGroupHintNoticeModel *hintNoticeModel;
@property (retain, nonatomic) IESIMGroupConfirmPageConfig *confirmPageConfig;
@property (retain, nonatomic) NSNumber *expUpgradeNumber;

- (void).cxx_destruct;

@end
