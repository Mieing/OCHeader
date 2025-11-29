@class NSString;

@interface BDECPigeonMarkdownTagInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *replaceText;
@property (copy, nonatomic) NSString *insertText;
@property (nonatomic) long long pos;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (copy, nonatomic) NSString *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
