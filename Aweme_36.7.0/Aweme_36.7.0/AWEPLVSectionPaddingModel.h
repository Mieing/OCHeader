@class NSNumber;

@interface AWEPLVSectionPaddingModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *left;
@property (copy, nonatomic) NSNumber *right;
@property (copy, nonatomic) NSNumber *top;
@property (copy, nonatomic) NSNumber *bottom;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
