@class AWETheaterEntranceGuideCoverTextModel, NSString, AWETheaterEntranceGuideCoverTextMapModel, AWETheaterEntranceGuideFrequencyControlModel, AWEURLModel;

@interface AWETheaterEntranceGuideModel : AWEBaseApiModel

@property (nonatomic) BOOL needGuideAdd;
@property (copy, nonatomic) NSString *addTip;
@property (retain, nonatomic) AWEURLModel *guideCover;
@property (nonatomic) BOOL hitNewVersion;
@property (retain, nonatomic) AWETheaterEntranceGuideCoverTextModel *guideCoverText;
@property (nonatomic) long long closeDuration;
@property (nonatomic) long long maxCloseNum;
@property (retain, nonatomic) AWETheaterEntranceGuideCoverTextMapModel *guideCoverTextMap;
@property (nonatomic) BOOL showAddPopup;
@property (retain, nonatomic) AWETheaterEntranceGuideFrequencyControlModel *frequencyControl;

+ (id)guideCoverTextJSONTransformer;
+ (id)frequencyControlJSONTransformer;
+ (id)guideCoverJSONTransformer;
+ (id)guideCoverTextMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
