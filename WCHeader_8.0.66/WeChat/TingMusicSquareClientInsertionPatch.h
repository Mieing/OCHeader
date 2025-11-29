@class NSData, TingMusicSquareClientInsertionInfo, MMListenDiscoverResponse;

@interface TingMusicSquareClientInsertionPatch : WXPBGeneratedMessage

@property (retain, nonatomic) TingMusicSquareClientInsertionInfo *insertionInfo;
@property (nonatomic) long long updatetimeSecond;
@property (retain, nonatomic) NSData *ctrlInfoBuffer;
@property (retain, nonatomic) MMListenDiscoverResponse *patchResult;
@property (nonatomic) int clientInsertionResult;

+ (void)initialize;

@end
