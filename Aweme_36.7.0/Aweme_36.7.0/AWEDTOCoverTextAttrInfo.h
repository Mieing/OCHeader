@class NSString;

@interface AWEDTOCoverTextAttrInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *coverTextId;
@property (copy, nonatomic) NSString *coverTextFont;
@property (copy, nonatomic) NSString *coverTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
