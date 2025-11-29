@interface SolitaireFormatInputEnterReport : SolitaireReport

@property (nonatomic) unsigned long long operateType;
@property (nonatomic) unsigned long long exitType;
@property (nonatomic) unsigned long long enterScene;

- (void)report;

@end
