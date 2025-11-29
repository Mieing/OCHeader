@class AWEAwemeModel;

@interface AWETVAwemeModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
