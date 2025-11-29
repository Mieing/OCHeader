@class NSData;

@interface FinderMusicRadio : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *singerRadioInfoBuffer;
@property (retain, nonatomic) NSData *ctxRecommendInfoBuffer;
@property (retain, nonatomic) NSData *finderProfileShowInfoBuffer;

+ (void)initialize;

- (void)setFinderProfileShowInfoBuffer:(id)a0;
- (id)finderProfileShowInfoBuffer;
- (void)setCtxRecommendInfoBuffer:(id)a0;
- (id)ctxRecommendInfoBuffer;
- (void)setSingerRadioInfoBuffer:(id)a0;
- (id)singerRadioInfoBuffer;
- (id)toCategoryItem;
- (id)toShowInfo;

@end
