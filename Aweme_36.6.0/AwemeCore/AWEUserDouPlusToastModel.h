@class NSNumber, NSString;

@interface AWEUserDouPlusToastModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *toastID;
@property (copy, nonatomic) NSString *toastString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
