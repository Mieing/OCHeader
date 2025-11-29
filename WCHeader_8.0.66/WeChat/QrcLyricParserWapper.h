@class QrcLyricParser;

@interface QrcLyricParserWapper : NSObject

@property (retain, nonatomic) QrcLyricParser *qrcLyricParser;
@property (retain, nonatomic) QrcLyricParser *luomaQrcLyricParser;

+ (id)sharedQrcLyricParserWapper;

- (id)init;
- (void).cxx_destruct;

@end
