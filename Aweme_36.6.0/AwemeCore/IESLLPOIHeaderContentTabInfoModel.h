@class NSString, IESLLPOIHeaderContentTabContentModel;

@interface IESLLPOIHeaderContentTabInfoModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long tabCount;
@property (copy, nonatomic) NSString *textGradient;
@property (copy, nonatomic) NSString *bgGradient;
@property (retain, nonatomic) IESLLPOIHeaderContentTabContentModel *contentItem;
@property (nonatomic) BOOL hasTrackShowEvent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
