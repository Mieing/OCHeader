@class NSString;
@protocol RTVEmoticonModel;

@interface RTVInteractiveEmoticonCellModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey>

@property (readonly, nonatomic) id<RTVEmoticonModel> emoticonModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (id)initWithEmoticonModel:(id)a0;
- (BOOL)joinDiffCalculate;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
