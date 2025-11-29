@class NSArray, NSString;

@interface AWEFormatAISearchCardDataModel : MTLModel <MTLJSONSerializing, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *avatarInfo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *abstract;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
