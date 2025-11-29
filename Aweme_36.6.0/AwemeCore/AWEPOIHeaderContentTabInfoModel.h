@class NSString, AWEPOIHeaderContentTabContentModel;

@interface AWEPOIHeaderContentTabInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long tabCount;
@property (copy, nonatomic) NSString *textGradient;
@property (copy, nonatomic) NSString *bgGradient;
@property (retain, nonatomic) AWEPOIHeaderContentTabContentModel *contentItem;
@property (nonatomic) BOOL hasTrackShowEvent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
