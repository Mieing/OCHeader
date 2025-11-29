@class NSString;

@interface AWEKefuFloatingWindowExpandTextBubbleStateConfig : AWEKefuFloatingWindowBaseStateConfig

@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *expandText;
@property (nonatomic) double expandDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
