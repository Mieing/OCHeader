@class NSString, NSDictionary;

@interface AWESideBarCommonLynxDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL needLogin;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *gayaToken;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
