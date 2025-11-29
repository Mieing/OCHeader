@class IESECMallPopupConfig, NSDictionary, IESECMallPopupTaskGroupConfig, NSString;

@interface IESECMallPopupTaskConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMallPopupTaskGroupConfig *groupInfo;
@property (nonatomic) long long priority;
@property (nonatomic) long long zIndex;
@property (nonatomic) BOOL firstScreenTask;
@property (nonatomic) long long scope;
@property (retain, nonatomic) IESECMallPopupConfig *popupConfig;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupInfoJSONTransformer;
+ (id)popupConfigJSONTransformer;
+ (id)scopeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
