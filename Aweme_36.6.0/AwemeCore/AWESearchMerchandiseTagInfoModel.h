@class NSString, NSArray, AWESearchTagExtraModel;

@interface AWESearchMerchandiseTagInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *tagID;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *urlList;
@property (retain, nonatomic) AWESearchTagExtraModel *extra;
@property (copy, nonatomic) NSArray *extraUrlList;
@property (copy, nonatomic) NSString *extraText;

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
