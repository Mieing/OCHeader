@class IESECCommentLynxCellConfigModel, NSString, NSDictionary, NSNumber;

@interface IESECCommentLynxCellDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) IESECCommentLynxCellConfigModel *config;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
