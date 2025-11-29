@class NSString, AWECodeGenElderGuardStatusModel;

@interface AWECodeGenGetElderGuardStatusResponseModel : AWEBaseResponseModel

@property (nonatomic) int code;
@property (copy, nonatomic) NSString *errMsg;
@property (retain, nonatomic) AWECodeGenElderGuardStatusModel *dataModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
