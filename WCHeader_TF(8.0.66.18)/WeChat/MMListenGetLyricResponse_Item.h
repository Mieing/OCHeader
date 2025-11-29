@class NSString, MMListenTTSInfo, NSMutableArray, MMListenGetLyricResponse_Item_TryInfo;

@interface MMListenGetLyricResponse_Item : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenTTSInfo *ttsInfo;
@property (retain, nonatomic) NSString *lyric;
@property (retain, nonatomic) MMListenGetLyricResponse_Item_TryInfo *tryInfo;
@property (retain, nonatomic) NSString *translateLyric;
@property (retain, nonatomic) NSMutableArray *originalLineIndex;

+ (void)initialize;

@end
