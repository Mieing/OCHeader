@class NSString;

@interface NoteInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int contactType;
@property (retain, nonatomic) NSString *note;
@property (nonatomic) unsigned long long time;

+ (void)initialize;

@end
