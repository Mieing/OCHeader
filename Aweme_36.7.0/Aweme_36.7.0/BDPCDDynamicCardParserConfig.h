@class NSString, NSDictionary;

@interface BDPCDDynamicCardParserConfig : NSObject

@property (copy, nonatomic) NSString *hostAppId;
@property (nonatomic) long long roleType;
@property (nonatomic) long long platformType;
@property (nonatomic) long long supportSDKVersion;
@property (nonatomic) long long supportSchemaVersion;
@property (copy, nonatomic) NSString *requestHost;
@property (copy, nonatomic) NSString *requestTemplateModelPath;
@property (copy, nonatomic) NSString *requestDynamicDataPathV1;
@property (copy, nonatomic) NSDictionary *requestDynamicDataParamsV1;
@property (copy, nonatomic) NSString *requestDynamicDataPathV2;
@property (copy, nonatomic) NSDictionary *requestDynamicDataParamsV2;
@property (copy, nonatomic) NSDictionary *requestDynamicDataQueryParamsV2;
@property (copy, nonatomic) NSString *requestDynamicActionPathV1;
@property (copy, nonatomic) NSDictionary *requestDynamicActionParamsV1;
@property (copy, nonatomic) NSString *requestDynamicActionPathV2;
@property (copy, nonatomic) NSDictionary *requestDynamicActionParamsV2;
@property (copy, nonatomic) NSDictionary *requestDynamicActionQueryParamsV2;
@property (copy, nonatomic) NSString *chatDetailBtmPageId;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) BOOL needQueryTemplateSwitch;
@property (nonatomic) long long modelFromType;
@property (copy, nonatomic) NSDictionary *commonTrackDict;

- (void).cxx_destruct;

@end
