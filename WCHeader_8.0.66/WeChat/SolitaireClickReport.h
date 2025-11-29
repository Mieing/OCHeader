@interface SolitaireClickReport : SolitaireReport

@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) unsigned long long clickType;

- (void)report;

@end
