@interface SolitaireCommonClickReport : SolitaireReport

@property (nonatomic) unsigned long long clickType;
@property (nonatomic) unsigned long long expandType;

- (void)report;

@end
