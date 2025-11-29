@class NSArray;

@interface ACCMomentTemplateModel : MTLModel

@property (nonatomic) unsigned long long templateId;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSArray *segInfos;

- (void).cxx_destruct;

@end
