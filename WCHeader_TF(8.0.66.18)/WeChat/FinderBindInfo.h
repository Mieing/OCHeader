@class FinderSticker, FinderBizInfo, FinderWecomInfo, FinderQQMusicInfo;

@interface FinderBindInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int bindType;
@property (retain, nonatomic) FinderBizInfo *bizInfo;
@property (retain, nonatomic) FinderWecomInfo *wecomInfo;
@property (retain, nonatomic) FinderQQMusicInfo *qqmusicInfo;
@property (retain, nonatomic) FinderBizInfo *profileBizInfo;
@property (retain, nonatomic) FinderSticker *stickerInfo;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setStickerInfo:(id)a0;
- (id)stickerInfo;
- (void)setProfileBizInfo:(id)a0;
- (id)profileBizInfo;
- (void)setQqmusicInfo:(id)a0;
- (id)qqmusicInfo;
- (void)setWecomInfo:(id)a0;
- (id)wecomInfo;
- (void)setBizInfo:(id)a0;
- (id)bizInfo;
- (void)setBindType:(unsigned int)a0;
- (unsigned int)bindType;
- (id)archivedWCTValue;

@end
