@class NSArray, AWECodeGenLandingSwitchEditInfoModel;

@interface AWEUserTabListModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *profileTabList;
@property (nonatomic) long long profileLandingTab;
@property (copy, nonatomic) NSArray *profileTabListV2;
@property (retain, nonatomic) AWECodeGenLandingSwitchEditInfoModel *landingSwitchEditInfo;

+ (id)profileTabListV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
