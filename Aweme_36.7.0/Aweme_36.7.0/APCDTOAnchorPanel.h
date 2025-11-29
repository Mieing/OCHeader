@class NSArray, NSString;

@interface APCDTOAnchorPanel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *shortlist;
@property (nonatomic) BOOL isShowServerAnchorList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortlistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
