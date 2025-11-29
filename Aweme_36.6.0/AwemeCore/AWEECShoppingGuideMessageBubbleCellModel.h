@class NSString, AWEECShoppingGuideMessageSectionModel;

@interface AWEECShoppingGuideMessageBubbleCellModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long position;
@property (retain, nonatomic) AWEECShoppingGuideMessageSectionModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
