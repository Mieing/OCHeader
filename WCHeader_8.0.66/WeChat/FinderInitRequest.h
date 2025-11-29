@class BaseRequest, NSData, FinderBaseRequest, SKBuiltinBuffer_t;

@interface FinderInitRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *keybuf;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL needReddotHistoryRecord;
@property (nonatomic) unsigned int reddotHistoryRecordUpdateTime;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;

+ (void)initialize;

- (void)setLatitude:(float)a0;
- (float)latitude;
- (void)setLongitude:(float)a0;
- (float)longitude;
- (void)setReddotHistoryRecordUpdateTime:(unsigned int)a0;
- (unsigned int)reddotHistoryRecordUpdateTime;
- (void)setNeedReddotHistoryRecord:(BOOL)a0;
- (BOOL)needReddotHistoryRecord;
- (void)setLastBuffer:(id)a0;
- (id)lastBuffer;
- (void)setFinderBasereq:(id)a0;
- (id)finderBasereq;
- (void)setKeybuf:(id)a0;
- (id)keybuf;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
