@class NSString, NSMutableArray;

@interface NewLifeSelectMusicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSString *streamUrl;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSMutableArray *singer;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) int duration;
@property (nonatomic) int docType;

+ (void)initialize;

@end
