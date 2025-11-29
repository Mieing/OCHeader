@class NSString, NSData;

@interface HbRecvRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int sequence;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned long long amt;
@property (retain, nonatomic) NSString *commentId;
@property (retain, nonatomic) NSString *wishing;
@property (retain, nonatomic) NSData *cover;

+ (void)initialize;

@end
