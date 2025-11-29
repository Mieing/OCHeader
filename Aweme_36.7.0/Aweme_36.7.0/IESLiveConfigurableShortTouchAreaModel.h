@class NSString, IESLiveShortTouchBubbleParamsModel, IESLiveShortTouchInfoModel, IESLiveShortTouchBigCardModel;

@interface IESLiveConfigurableShortTouchAreaModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) int type;
@property (nonatomic) int loadType;
@property (nonatomic) unsigned int priority;
@property (nonatomic) long long dynamicPriority;
@property (nonatomic) long long minWebcastSdkVersion;
@property (nonatomic) int shortTouchType;
@property (copy, nonatomic) NSString *containerPayload;
@property (retain, nonatomic) IESLiveShortTouchInfoModel *shortTouchInfo;
@property (retain, nonatomic) IESLiveShortTouchBigCardModel *bigCardModel;
@property (retain, nonatomic) IESLiveShortTouchBubbleParamsModel *bubbleParams;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int hideMode;
@property (nonatomic) int enhancedTouch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortTouchInfoJSONTransformer;
+ (id)bigCardModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
