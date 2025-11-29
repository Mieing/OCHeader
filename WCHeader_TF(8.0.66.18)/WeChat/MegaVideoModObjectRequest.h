@class BaseRequest, MegaVideoBaseRequest, NSString;

@interface MegaVideoModObjectRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MegaVideoBaseRequest *megaBasereq;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long videoObjectId;
@property (nonatomic) unsigned int bulletCommentSwitch;

+ (void)initialize;

@end
