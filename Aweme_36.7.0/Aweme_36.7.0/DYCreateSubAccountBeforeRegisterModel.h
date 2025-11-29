@class NSString;

@interface DYCreateSubAccountBeforeRegisterModel : DYAPassportResponseModel

@property (nonatomic) BOOL showEntrance;
@property (copy, nonatomic) NSString *registerDescription;
@property (nonatomic) long long cantRegisterReason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
