@class NSString;

@interface Announce : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

@end
