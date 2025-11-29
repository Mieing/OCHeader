@class NSString;

@interface AFDMomentCombinationModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long abType;
@property (copy, nonatomic) NSString *storyText;
@property (copy, nonatomic) NSString *momentText;
@property (copy, nonatomic) NSString *labelInfoColor;
@property (copy, nonatomic) NSString *labelBackgroundColor;
@property (nonatomic) BOOL shouldShowWidgetGuide;
@property (nonatomic) BOOL shouldShowRoundedCorner;
@property (nonatomic) BOOL shouldShowPublicMomentText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
