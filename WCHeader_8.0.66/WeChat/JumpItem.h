@class NSString;

@interface JumpItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *pagepath;
@property (retain, nonatomic) NSString *againCtx;

+ (void)initialize;

@end
