@class NSString;

@interface AWETextImageTagModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *tagImageName;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
