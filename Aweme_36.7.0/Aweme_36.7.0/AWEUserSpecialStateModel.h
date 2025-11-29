@class NSString;

@interface AWEUserSpecialStateModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *specialStateTitle;
@property (retain, nonatomic) NSString *specialStateContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
