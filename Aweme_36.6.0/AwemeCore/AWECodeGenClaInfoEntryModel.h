@class NSString, AWECodeGenClaInfoModel;

@interface AWECodeGenClaInfoEntryModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) AWECodeGenClaInfoModel *valueModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
