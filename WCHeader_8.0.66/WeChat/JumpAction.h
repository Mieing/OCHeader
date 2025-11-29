@class NSString;

@interface JumpAction : WXPBGeneratedMessage

@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionUrl;
@property (retain, nonatomic) NSString *actionAppUsername;

+ (void)initialize;

@end
