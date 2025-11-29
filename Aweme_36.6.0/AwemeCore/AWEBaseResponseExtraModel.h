@class NSNumber, NSArray;

@interface AWEBaseResponseExtraModel : AWERootModel

@property (retain, nonatomic) NSNumber *now;
@property (copy, nonatomic) NSArray *fatalItemIdsArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
