@class NSString, AWEGrouponBubbleModelContentImgUrl, NSArray;

@interface AWEGrouponBubbleModelContent : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponBubbleModelContentImgUrl *imgUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)descJSONTransformer;

- (void).cxx_destruct;

@end
