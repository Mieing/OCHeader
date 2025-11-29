@class NSString;

@interface RTVInviteUserCellContext : NSObject <RTVUICellModelDiffableInterface>

@property (readonly, nonatomic) BOOL canSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCanSelect:(BOOL)a0;
- (BOOL)joinDiffCalculate;

@end
