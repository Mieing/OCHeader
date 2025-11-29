@class NSString, LbsLocationNew, ChildMode;

@interface SimilarEmoticonRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) LbsLocationNew *location;
@property (nonatomic) unsigned int tab;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int requestType;
@property (retain, nonatomic) NSString *emojiUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) ChildMode *childMode;

+ (void)initialize;

@end
