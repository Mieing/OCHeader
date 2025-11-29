@class NSString, NSArray;

@interface AWESearchCachalotCardViewHomePageNewUserGuideModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL dataPrepared;
@property (nonatomic) double cellHeight;
@property (nonatomic) double cellFullScreenHeight;
@property (nonatomic) double cellRealHeight;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *mainIconUrl;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL finishAnimate;
@property (copy, nonatomic) NSArray *queryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateCardHeight:(id)a0;
+ (long long)text:(id)a0 withFont:(id)a1 truncateAtWidth:(double)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)prepareData;

@end
