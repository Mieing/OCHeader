@class NSString, NSArray;

@interface AWEDTOPoiPanel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *customDialogTag;
@property (copy, nonatomic) NSArray *shortlist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortlistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
