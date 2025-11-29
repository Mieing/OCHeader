@class NSString;

@interface CheckNameMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *checknameSign;
@property (nonatomic) unsigned int messageType;

+ (void)initialize;

@end
