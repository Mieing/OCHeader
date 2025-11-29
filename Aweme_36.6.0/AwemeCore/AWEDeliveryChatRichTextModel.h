@class NSString;

@interface AWEDeliveryChatRichTextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *size;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL bold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
