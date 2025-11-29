@class NSNumber, NSString;

@interface AWEReportTypeModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *reasonType;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSNumber *auditType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
