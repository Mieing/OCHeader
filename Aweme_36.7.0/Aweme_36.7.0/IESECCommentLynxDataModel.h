@class NSString, NSDictionary;

@interface IESECCommentLynxDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
