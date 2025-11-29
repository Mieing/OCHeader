@class NSString;

@interface RTVInteractionShareCellModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey, RTVInteractionIconModelProtocol>

@property (nonatomic) BOOL newStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (id)initWithNewStyle:(BOOL)a0;
- (BOOL)joinDiffCalculate;
- (id)accessibilityLabel;
- (id)iconName;
- (long long)contentMode;

@end
