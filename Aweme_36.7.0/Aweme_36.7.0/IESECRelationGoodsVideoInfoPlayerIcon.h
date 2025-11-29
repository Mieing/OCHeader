@class NSString, IESECURLModel;

@interface IESECRelationGoodsVideoInfoPlayerIcon : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *url;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
