@class AddMsg, NSString, NSData;

@interface AddBypMsg : WXPBGeneratedMessage

@property (retain, nonatomic) AddMsg *msg;
@property (retain, nonatomic) NSString *msgSessionId;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSData *extinfo;
@property (nonatomic) BOOL isSender;

+ (void)initialize;

@end
