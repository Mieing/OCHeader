@class AWESSUCTextModel, NSString, NSArray, AWESSUCImageModel, AWESSUCSeparatorModel, AWESSUCContainerModel;

@interface AWESSUCComponentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSString *componentPosition;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *events;
@property (copy, nonatomic) NSString *qrecForSearch;
@property (nonatomic) long long coverInfoType;
@property (nonatomic) BOOL needGeneralSearchInfo;
@property (retain, nonatomic) AWESSUCImageModel *icon;
@property (retain, nonatomic) AWESSUCTextModel *title;
@property (retain, nonatomic) AWESSUCSeparatorModel *separatorBetweenTitleAndSubtitle;
@property (retain, nonatomic) AWESSUCTextModel *subtitle;
@property (retain, nonatomic) AWESSUCSeparatorModel *separatorBetweenSubtitleAndSupplementaryInfo;
@property (retain, nonatomic) AWESSUCTextModel *supplementaryInfo;
@property (retain, nonatomic) AWESSUCTextModel *actionTitle;
@property (retain, nonatomic) AWESSUCImageModel *actionIcon;
@property (retain, nonatomic) AWESSUCContainerModel *container;

+ (id)eventsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
