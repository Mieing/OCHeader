@class AWENearbyHalfStyleConfigModel, NSString, NSDictionary, AWEGrouponHalfClosedAction, NSArray;

@interface AWENearbyOpenSubPageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *subPageUrl;
@property (nonatomic) long long sceneType;
@property (nonatomic) long long pageType;
@property (nonatomic) long long openType;
@property (nonatomic) long long pageFullPercent;
@property (nonatomic) long long disableSlideClose;
@property (retain, nonatomic) AWEGrouponHalfClosedAction *grouponHalfClosedAction;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *closeType;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWENearbyHalfStyleConfigModel *styleConfig;
@property (nonatomic) long long uiStyle;
@property (copy, nonatomic) NSString *arrowColor;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *highLightID;
@property (copy, nonatomic) NSString *maskColor;
@property (copy, nonatomic) id /* block */ pageCloseBlk;
@property (nonatomic) unsigned long long showState;
@property (copy, nonatomic) NSArray *closeAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)styleConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
