@class NSNumber, NSString, NSDictionary;

@interface AWEInspireInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *inspireTime;
@property (retain, nonatomic) NSNumber *inspireNum;
@property (copy, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *maskGuideText;
@property (copy, nonatomic) NSString *pendantMainText;
@property (copy, nonatomic) NSString *pendantSubText;
@property (copy, nonatomic) NSNumber *pendantExtendShowSeconds;
@property (retain, nonatomic) NSNumber *timingType;
@property (copy, nonatomic) NSNumber *styleType;
@property (copy, nonatomic) NSString *pendantOpenUrl;
@property (copy, nonatomic) NSDictionary *dualWidgetInfo;
@property (copy, nonatomic) NSString *widgetTemplateUrl;
@property (copy, nonatomic) NSString *adType;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *liveActionExtra;
@property (nonatomic) BOOL enableMaskGuide;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *activityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
