@class NSString, NSDictionary, AWETheaterCardUIConfigModel, AWETheaterMoreFeedSectionItem, AWETheaterSectionModel;

@interface AWETheaterCardSectionItem : NSObject <NSCopying>

@property (retain, nonatomic) AWETheaterCardUIConfigModel *cardUIConfig;
@property (nonatomic) long long cardType;
@property (copy, nonatomic) NSDictionary *cradData;
@property (copy, nonatomic) NSString *annieXCardSchema;
@property (copy, nonatomic) NSString *annieXCardRawData;
@property (nonatomic) BOOL hasUpdateLayout;
@property (retain, nonatomic) AWETheaterSectionModel *sectionModel;
@property (retain, nonatomic) AWETheaterMoreFeedSectionItem *moreFeedSectionModel;

- (id)cardAwemeModel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
