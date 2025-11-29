@class NSString, NSDictionary, NSNumber, IESECCommentSliceCellConfigModel;

@interface IESECCommentSliceCellDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) IESECCommentSliceCellConfigModel *config;
@property (copy, nonatomic) NSString *bizData;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSDictionary *mobParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
