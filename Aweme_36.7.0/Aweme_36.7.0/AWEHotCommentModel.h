@class NSString;

@interface AWEHotCommentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long diggCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
