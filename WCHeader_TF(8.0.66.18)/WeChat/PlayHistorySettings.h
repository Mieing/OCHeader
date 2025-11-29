@interface PlayHistorySettings : WXPBGeneratedMessage

@property (nonatomic) unsigned int playHistorySwitch;
@property (nonatomic) unsigned int collectionWatchingSwitch;

+ (void)initialize;

- (void)setCollectionWatchingSwitch:(unsigned int)a0;
- (unsigned int)collectionWatchingSwitch;
- (void)setPlayHistorySwitch:(unsigned int)a0;
- (unsigned int)playHistorySwitch;

@end
