@class BaseRequest, NSString;

@interface SendPhoto2FBWallRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *picture;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *caption;

+ (void)initialize;

@end
