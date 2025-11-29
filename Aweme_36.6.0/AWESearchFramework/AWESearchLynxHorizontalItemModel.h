@class NSString, AWEAwemeModel;

@interface AWESearchLynxHorizontalItemModel : AWEBaseApiModel

@property (nonatomic) long long awemeIndex;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSString *tagStr;
@property (nonatomic) BOOL hideTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
