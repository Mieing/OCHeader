@class NSString;

@interface AWEDTOTextModeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isTextMode;
@property (nonatomic) BOOL isModernTextMode;
@property (nonatomic) BOOL realUpgrade;
@property (nonatomic) BOOL hasGeneratedTitle;
@property (copy, nonatomic) NSString *textModeUseScene;
@property (nonatomic) BOOL useTextForPublish;
@property (nonatomic) BOOL isModernTextInputMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
