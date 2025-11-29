@class NSString;

@interface MMListenAudioCategoryExposeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) unsigned long long duration;
@property (retain, nonatomic) NSString *listenId;

+ (void)initialize;

@end
