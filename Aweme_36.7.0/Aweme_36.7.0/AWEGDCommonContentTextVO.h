@class AWEGDContentBoxModel, AWEGDStructuredListContentModel, AWEGDSimpleContentModel, AWEGDSectionTitleModel, NSString, AWEGDContentWithUnitModel, AWEGDDividerTitleModel, AWEGDContentWithTagModel, AWEGDStructuredContentModel;

@interface AWEGDCommonContentTextVO : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long voType;
@property (retain, nonatomic) AWEGDSectionTitleModel *type1VO;
@property (retain, nonatomic) AWEGDDividerTitleModel *type2VO;
@property (retain, nonatomic) AWEGDStructuredContentModel *type3VO;
@property (retain, nonatomic) AWEGDSimpleContentModel *type4VO;
@property (retain, nonatomic) AWEGDContentWithUnitModel *type5VO;
@property (retain, nonatomic) AWEGDContentBoxModel *type6VO;
@property (retain, nonatomic) AWEGDStructuredListContentModel *type7VO;
@property (retain, nonatomic) AWEGDContentWithTagModel *type8VO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
