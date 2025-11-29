@class NSString, NSArray, AWELunaMusicianInfoModel;

@interface AWEOriginalLunaDiversionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *artistID;
@property (retain, nonatomic) NSArray *diversionBtnArray;
@property (retain, nonatomic) AWELunaMusicianInfoModel *diversionPopViewModel;

+ (id)diversionBtnArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
