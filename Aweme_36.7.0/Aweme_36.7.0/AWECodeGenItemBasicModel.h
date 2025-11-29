@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenItemBasicModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWECodeGenUrlModel *coverUrlModel;
@property (nonatomic) long long itemDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
