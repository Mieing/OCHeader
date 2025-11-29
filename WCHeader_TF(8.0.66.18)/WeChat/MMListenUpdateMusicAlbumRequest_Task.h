@class NSString;

@interface MMListenUpdateMusicAlbumRequest_Task : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;

+ (void)initialize;

@end
