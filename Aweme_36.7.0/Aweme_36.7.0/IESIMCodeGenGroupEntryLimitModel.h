@class NSString, IESIMCodeGenEntryLimitExtModel, IESIMCodeGenEntryLimitActionExtModel;

@interface IESIMCodeGenGroupEntryLimitModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *jumpSchema;
@property (retain, nonatomic) IESIMCodeGenEntryLimitExtModel *entryLimitExtModel;
@property (retain, nonatomic) IESIMCodeGenEntryLimitActionExtModel *actionExtModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
