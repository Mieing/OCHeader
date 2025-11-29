@class NSString, NSArray;

@interface AWEMessageReachResourceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSArray *images;
@property (nonatomic) BOOL autoSwitchTab;
@property (nonatomic) long long needCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
