@class AWEPadPMCCardExtraModel, NSString, NSArray, NSNumber;

@interface AWEPadPMCSeriesCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *seriesName;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *seriesID;
@property (copy, nonatomic) NSString *watchedItem;
@property (retain, nonatomic) NSNumber *watchedEpisode;
@property (retain, nonatomic) NSArray *coverUrl;
@property (retain, nonatomic) NSArray *horizontalCoverUrl;
@property (retain, nonatomic) NSNumber *playVV;
@property (retain, nonatomic) NSArray *contentTypes;
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) BOOL collected;
@property (retain, nonatomic) AWEPadPMCCardExtraModel *extraModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
