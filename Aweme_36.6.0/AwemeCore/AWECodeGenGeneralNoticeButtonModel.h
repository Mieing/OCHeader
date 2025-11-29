@class NSArray, AWECodeGenNoticeButtonModel;

@interface AWECodeGenGeneralNoticeButtonModel : AWEBaseDataModel

@property (nonatomic) long long btnType;
@property (retain, nonatomic) AWECodeGenNoticeButtonModel *generalButtonModel;
@property (copy, nonatomic) NSArray *allowShowButtonTypesArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
