@class NSArray, NSString;

@interface AWESearchAIGCImageInfo : MTLModel <MTLJSONSerializing, AWESearchAIGCSchemaAttachable>

@property (nonatomic) long long imageWidth;
@property (nonatomic) long long imageHeight;
@property (copy, nonatomic) NSArray *imageURLList;
@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSString *attachmentKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
