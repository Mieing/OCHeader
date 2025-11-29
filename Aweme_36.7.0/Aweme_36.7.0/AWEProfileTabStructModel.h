@class NSString, AWECodeGenTabMergedGuidanceModel;

@interface AWEProfileTabStructModel : AWEBaseApiModel

@property (nonatomic) long long tabId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *nameEn;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *tabShowName;
@property (copy, nonatomic) NSString *tabComponentType;
@property (nonatomic) BOOL lockIconVisible;
@property (copy, nonatomic) NSString *mobParams;
@property (retain, nonatomic) AWECodeGenTabMergedGuidanceModel *tabMergedGuidance;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
