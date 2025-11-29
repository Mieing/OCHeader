@class NSString;

@interface AWELifeSnackBarActionSettingModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *count;
@property (retain, nonatomic) NSString *duration;
@property (retain, nonatomic) NSString *componentId;
@property (nonatomic) long long pageType;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
