@class NSString, NLETemplateModel_OC;

@interface NPEffectCamTemplateConfig : NSObject

@property (retain, nonatomic) NLETemplateModel_OC *templateModel;
@property (retain, nonatomic) NSString *extraResourcePath;
@property (retain, nonatomic) NSString *resourceWorkspace;
@property (retain, nonatomic) NSString *zipFolder;
@property (nonatomic) struct CGSize { double width; double height; } limitReourceSize;
@property (nonatomic) int videoBitRate;
@property (nonatomic) BOOL referenceOriginBitRate;
@property (nonatomic) BOOL videoOnlyIfNeed;
@property (retain, nonatomic) NSString *capabilitiesJsonString;

- (void).cxx_destruct;
- (id)init;

@end
