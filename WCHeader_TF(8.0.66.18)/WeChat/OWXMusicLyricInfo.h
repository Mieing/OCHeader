@class NSString;

@interface OWXMusicLyricInfo : NSObject

@property (nonatomic) unsigned int startTimeInMilliseconds;
@property (retain, nonatomic) NSString *content;

- (id)initWithStartTimeInMilliseconds:(unsigned int)a0 content:(id)a1;
- (void).cxx_destruct;

@end
