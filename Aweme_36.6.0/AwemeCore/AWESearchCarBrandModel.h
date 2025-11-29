@class NSString, NSMutableArray, AWEURLModel;

@interface AWESearchCarBrandModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSMutableArray *carList;
@property (retain, nonatomic) NSString *infoSource;
@property (retain, nonatomic) NSString *hotTag;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (readonly, copy, nonatomic) NSString *aladdinID;

+ (id)iconURLJSONTransformer;
+ (id)aladdinIDJSONTransformer;
+ (id)carListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
