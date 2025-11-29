@class NSString, NSDictionary;

@interface AWESplashSkipModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableCountdown;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double widthExtra;
@property (nonatomic) double heightExtra;
@property (nonatomic) double fakeClickHeight;
@property (nonatomic) double fakeClickWidth;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *countdownUnit;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long skipAction;
@property (copy, nonatomic) NSDictionary *slideSkipInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
