@class NSString;

@interface IESECVideoInnerFlowRequestParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *filters;
@property (nonatomic) long long pageNum;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *metaParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
