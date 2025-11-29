@class NSString;

@interface AWEQuickFlashActivityStyleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bottomTitle;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) BOOL panelSingleBtn;
@property (nonatomic) BOOL isActivityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
