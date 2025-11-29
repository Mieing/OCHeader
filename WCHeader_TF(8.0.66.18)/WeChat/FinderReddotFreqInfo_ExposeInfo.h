@class NSString;

@interface FinderReddotFreqInfo_ExposeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int accumExposeCount;
@property (nonatomic) unsigned int accumPenaltyCount;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) BOOL isPenalized;
@property (nonatomic) BOOL isNextPenalized;
@property (nonatomic) unsigned int willPenaltyGapCount;
@property (nonatomic) unsigned int willFreeGapCount;

+ (void)initialize;

- (void)setWillFreeGapCount:(unsigned int)a0;
- (unsigned int)willFreeGapCount;
- (void)setWillPenaltyGapCount:(unsigned int)a0;
- (unsigned int)willPenaltyGapCount;
- (void)setIsNextPenalized:(BOOL)a0;
- (BOOL)isNextPenalized;
- (void)setIsPenalized:(BOOL)a0;
- (BOOL)isPenalized;
- (void)setBusinessType:(unsigned int)a0;
- (unsigned int)businessType;
- (void)setAccumPenaltyCount:(unsigned int)a0;
- (unsigned int)accumPenaltyCount;
- (void)setAccumExposeCount:(unsigned int)a0;
- (unsigned int)accumExposeCount;
- (void)setPath:(id)a0;
- (id)path;

@end
