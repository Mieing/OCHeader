@class IESLLGDContentBoxModel, IESLLGDStructuredListContentModel, IESLLGDSimpleContentModel, IESLLGDStructuredContentModel, IESLLGDSectionTitleModel, IESLLGDContentWithTagModel, IESLLGDContentWithUnitModel, NSString, IESLLGDDividerTitleModel;

@interface IESLLGDCommonContentTextVO : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long voType;
@property (retain, nonatomic) IESLLGDSectionTitleModel *type1VO;
@property (retain, nonatomic) IESLLGDDividerTitleModel *type2VO;
@property (retain, nonatomic) IESLLGDStructuredContentModel *type3VO;
@property (retain, nonatomic) IESLLGDSimpleContentModel *type4VO;
@property (retain, nonatomic) IESLLGDContentWithUnitModel *type5VO;
@property (retain, nonatomic) IESLLGDContentBoxModel *type6VO;
@property (retain, nonatomic) IESLLGDStructuredListContentModel *type7VO;
@property (retain, nonatomic) IESLLGDContentWithTagModel *type8VO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
