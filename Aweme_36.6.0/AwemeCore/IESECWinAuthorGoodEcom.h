@class NSString, IESECURLModel;

@interface IESECWinAuthorGoodEcom : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *iconUrl;
@property (copy, nonatomic) NSString *clickSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
