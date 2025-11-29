@class NSNumber, NSString, AWEURLModel;

@interface AWEPOIEntryModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) NSNumber *classCode;
@property (copy, nonatomic) NSString *entryName;

+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
