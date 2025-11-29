@class NSString, NSDictionary;

@interface AWEDTOInstanceContextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *zipUri;
@property (copy, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned long long subMediaType;
@property (nonatomic) BOOL isTextMode;
@property (nonatomic) BOOL isTemplateMode;
@property (copy, nonatomic) NSString *templateRect;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *modernText;
@property (copy, nonatomic) NSString *styles;
@property (copy, nonatomic) NSString *extraModels;
@property (nonatomic) BOOL isSimplifiedTextMode;
@property (nonatomic) unsigned long long textModeEnterMethod;
@property (copy, nonatomic) NSString *templateName;
@property (copy, nonatomic) NSDictionary *styleIdCache;
@property (copy, nonatomic) NSDictionary *styleDimensionsCache;
@property (copy, nonatomic) NSDictionary *wordSegmentsCache;
@property (copy, nonatomic) NSDictionary *moodSwingCache;
@property (copy, nonatomic) NSString *aigcMark;
@property (copy, nonatomic) NSString *aigcMarkHistoryList;
@property (nonatomic) BOOL isAimateEdit;
@property (copy, nonatomic) NSDictionary *bgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
