@class NSArray, NSString;

@interface AWEIMHotSpotCommentRequest : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *hotSpotCommentReqInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hotSpotCommentReqInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
