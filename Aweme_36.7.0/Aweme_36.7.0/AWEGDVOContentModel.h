@class NSString, AWEGDStructuredContentModel, AWEGDStructuredListContentModel;

@interface AWEGDVOContentModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long voType;
@property (retain, nonatomic) AWEGDStructuredContentModel *type3VO;
@property (retain, nonatomic) AWEGDStructuredListContentModel *type7VO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
