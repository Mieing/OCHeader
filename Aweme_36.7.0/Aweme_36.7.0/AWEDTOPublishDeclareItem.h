@class NSString;

@interface AWEDTOPublishDeclareItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *chooseText;
@property (copy, nonatomic) NSString *chooseIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
