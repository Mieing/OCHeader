@class NSArray, NSString;

@interface AWEDTOAnchorPanel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *shortlistIos;
@property (nonatomic) BOOL isShowServerAnchorList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortlistIosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
