@class NSArray, NSString;

@interface APCDTOImport : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *contents;
@property (nonatomic) BOOL enableMusicSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
