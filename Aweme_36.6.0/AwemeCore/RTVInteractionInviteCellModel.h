@class NSString;

@interface RTVInteractionInviteCellModel : NSObject <RTVUICellModelDiffableInterface, RxPrimaryKey, RTVInteractionIconModelProtocol>

@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL canShowTips;
@property (copy, nonatomic) NSString *tips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getInKey;
- (id)initWithNewStyle:(BOOL)a0;
- (void)updateTips:(id)a0;
- (BOOL)joinDiffCalculate;
- (void)updateCanShowTips:(BOOL)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)iconName;

@end
