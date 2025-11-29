@class NSString;

@interface PardusResultShowInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) unsigned int duration;

+ (void)initialize;

@end
