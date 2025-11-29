@class NSArray, NSDictionary, NSString, AWECommentInputLynxViewInputExpandConfig, NSNumber;

@interface AWECommentInputLynxViewInputConfig : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *showInDialog;
@property (copy, nonatomic) NSDictionary *inputTextConfig;
@property (retain, nonatomic) NSArray *elementDisplayConfig;
@property (copy, nonatomic) NSDictionary *albumPickerConfig;
@property (copy, nonatomic) NSString *imagePreviewMode;
@property (retain, nonatomic) NSNumber *disableFullScreen;
@property (retain, nonatomic) AWECommentInputLynxViewInputExpandConfig *expandConfig;
@property (copy, nonatomic) NSArray *quickEmojis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
