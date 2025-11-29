@class NSString;

@interface AWEUserSpecialStateModel : AWEBaseApiModel

@property (nonatomic) unsigned long long specialStateType;
@property (retain, nonatomic) NSString *specialStateTitle;
@property (retain, nonatomic) NSString *specialStateContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
