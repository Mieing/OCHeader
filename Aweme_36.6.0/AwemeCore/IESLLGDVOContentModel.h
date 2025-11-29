@class IESLLGDStructuredContentModel, IESLLGDStructuredListContentModel, NSString;

@interface IESLLGDVOContentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long voType;
@property (retain, nonatomic) IESLLGDStructuredContentModel *type3VO;
@property (retain, nonatomic) IESLLGDStructuredListContentModel *type7VO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
