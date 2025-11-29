@class NSNumber, NSString;

@interface AWEListenFeedDiversionModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *popupScene;
@property (copy, nonatomic) NSString *subTitleType;
@property (copy, nonatomic) NSString *sideDesc;
@property (retain, nonatomic) NSNumber *categoryId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
