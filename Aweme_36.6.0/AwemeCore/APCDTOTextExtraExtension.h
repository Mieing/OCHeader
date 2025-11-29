@class NSString;

@interface APCDTOTextExtraExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCommentPublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
