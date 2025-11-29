@class NSString, NSArray;

@interface AWECodeGenV1AiMarkPointResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSString *tip;
@property (copy, nonatomic) NSString *pointType;
@property (nonatomic) int pointNum;
@property (copy, nonatomic) NSArray *taskIdArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
