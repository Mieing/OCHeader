@class NSArray;

@interface AWEDiscoverCategoryRecordImageModel : AWEBaseApiModel

@property (readonly, copy, nonatomic) NSArray *urlList;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
