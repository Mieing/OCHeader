@class NSArray, NSString;

@interface IESECGoodsSpecDetail : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *imgList;
@property (copy, nonatomic) NSArray *bigImgList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imgListJSONTransformer;
+ (id)bigImgListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
