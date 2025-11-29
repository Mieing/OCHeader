@interface SolitaireActiveReport : SolitaireReport

@property (nonatomic) unsigned long long headerLength;
@property (nonatomic) unsigned long long tailLength;
@property (nonatomic) unsigned long long exampleLength;
@property (nonatomic) unsigned long long activeScene;

- (void)report;

@end
