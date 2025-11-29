@class NSNumber;

@interface AWESearchPositionModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *begin;
@property (retain, nonatomic) NSNumber *end;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
