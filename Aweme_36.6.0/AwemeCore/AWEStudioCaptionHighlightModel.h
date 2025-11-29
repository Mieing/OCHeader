@class NSString;

@interface AWEStudioCaptionHighlightModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
