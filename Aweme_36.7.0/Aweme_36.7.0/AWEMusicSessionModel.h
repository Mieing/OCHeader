@class NSString, NSMutableDictionary;

@interface AWEMusicSessionModel : NSObject

@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableDictionary *musicDetailDic;
@property (retain, nonatomic) NSMutableDictionary *itemIDMusicIdDic;
@property (retain, nonatomic) NSMutableDictionary *videoOrderDict;
@property (nonatomic) BOOL isFromHotMusicList;

- (void).cxx_destruct;

@end
