@class NSString, NSMutableArray, GameLiteAppInfo;

@interface FileIndex : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *rid;
@property (nonatomic) unsigned long long relativeOffset;
@property (nonatomic) unsigned int size;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSMutableArray *extraHeaderList;
@property (retain, nonatomic) GameLiteAppInfo *liteApp;
@property (nonatomic) unsigned int fileType;

+ (void)initialize;

- (void)setFileType:(unsigned int)a0;
- (unsigned int)fileType;
- (void)setLiteApp:(id)a0;
- (id)liteApp;
- (void)setExtraHeaderList:(id)a0;
- (id)extraHeaderList;
- (void)setMimeType:(id)a0;
- (id)mimeType;
- (void)setSize:(unsigned int)a0;
- (unsigned int)size;
- (void)setRelativeOffset:(unsigned long long)a0;
- (unsigned long long)relativeOffset;
- (void)setRid:(id)a0;
- (id)rid;

@end
