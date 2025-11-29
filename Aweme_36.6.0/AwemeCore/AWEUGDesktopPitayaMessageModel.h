@class NSString, NSDictionary, AWEUGDesktopPitayaOriginEventParamsModel;

@interface AWEUGDesktopPitayaMessageModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *actionName;
@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *guideStyleType;
@property (copy, nonatomic) NSString *pitayaTraceId;
@property (copy, nonatomic) NSString *passControlLevel;
@property (retain, nonatomic) AWEUGDesktopPitayaOriginEventParamsModel *originEventParams;
@property (copy, nonatomic) NSDictionary *originParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

@end
