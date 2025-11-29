@class NSNumber;

@interface AWEGrouponAsyncExposeCardModel : AWEBaseApiModel

@property (nonatomic) BOOL asyncEnable;
@property (retain, nonatomic) NSNumber *cardType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
