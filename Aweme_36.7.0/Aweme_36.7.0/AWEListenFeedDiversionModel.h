@class NSNumber, NSString, NSArray;

@interface AWEListenFeedDiversionModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *popupScene;
@property (copy, nonatomic) NSString *subTitleType;
@property (copy, nonatomic) NSString *sideDesc;
@property (retain, nonatomic) NSNumber *categoryId;
@property (retain, nonatomic) NSArray *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
