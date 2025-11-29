@class NSString, NSArray, AWEAdSearchDataModel, AWEAwemeModel, AWEOriginalAdModel, AWEUserModel;

@interface AWESearchAdModule : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *adData;
@property (retain, nonatomic) NSArray *cardDataList;
@property (copy, nonatomic) NSString *brandLiveAppointmentImgData;
@property (retain, nonatomic) AWEAdSearchDataModel *searchDataModel;
@property (copy, nonatomic) NSString *cardTitle;
@property (retain, nonatomic) NSArray *cardList;
@property (nonatomic) long long adStyleType;
@property (retain, nonatomic) AWEAwemeModel *adItem;
@property (retain, nonatomic) AWEOriginalAdModel *imageAppointmentModel;
@property (retain, nonatomic) NSArray *adItems;
@property (retain, nonatomic) AWEUserModel *adEndorseUserData;
@property (copy, nonatomic) NSArray *challenges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardListJSONTransformer;
+ (id)challengesJSONTransformer;
+ (id)adItemsJSONTransformer;
+ (id)searchDataModelJSONTransformer;
+ (id)adItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
