@class NSString;

@interface AWEDTONewCoverMobParams : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isText;
@property (nonatomic) BOOL isCoverTemplate;
@property (nonatomic) BOOL isTextTemplate;
@property (nonatomic) BOOL isPicAdjust;
@property (nonatomic) BOOL isNewText;
@property (nonatomic) long long textNum;
@property (copy, nonatomic) NSString *coverTemplateId;
@property (copy, nonatomic) NSString *coverTabName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
