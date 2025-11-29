@class NSString;

@interface AFDLocalDataCheckResultModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *tableMessageID;
@property (nonatomic) BOOL isValid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
