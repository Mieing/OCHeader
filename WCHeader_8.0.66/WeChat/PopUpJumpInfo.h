@class NSString;

@interface PopUpJumpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *pagepath;

+ (void)initialize;

@end
