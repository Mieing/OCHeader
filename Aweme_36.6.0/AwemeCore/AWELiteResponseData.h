@class NSNumber, NSString, NSDictionary;

@interface AWELiteResponseData : AWELiteBaseApiModel

@property (retain, nonatomic) NSNumber *toastStyle;
@property (copy, nonatomic) NSString *toastInfo;
@property (copy, nonatomic) NSString *logEvent;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
