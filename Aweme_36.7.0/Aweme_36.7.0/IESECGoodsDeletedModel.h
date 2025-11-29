@class NSString, IESECURLModel;

@interface IESECGoodsDeletedModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) IESECURLModel *iconURL;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
