@class NSString, NSDictionary;

@interface AWEMultiTabMallIconModel2 : MTLModel <MTLJSONSerializing, AWEMallTimerTaskModelProtocol>

@property (copy, nonatomic) NSString *lottieID;
@property (copy, nonatomic) NSString *selectIconUrlDark;
@property (copy, nonatomic) NSString *selectIconUrlLight;
@property (copy, nonatomic) NSString *unselectIconUrlDark;
@property (copy, nonatomic) NSString *unselectIconUrlLight;
@property (copy, nonatomic) NSString *iconType;
@property (copy, nonatomic) NSString *indicatorColorDark;
@property (copy, nonatomic) NSString *indicatorColorLight;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *iconTitle;
@property (nonatomic) long long imageHeight;
@property (nonatomic) long long imageWidth;
@property (nonatomic) double innerLeftMargin;
@property (nonatomic) double innerRightMargin;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
