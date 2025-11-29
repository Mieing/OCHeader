@class NSString;

@interface EmotionFinderLinkInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *nonce;
@property (nonatomic) unsigned int time;
@property (retain, nonatomic) NSString *finderUserName;

+ (void)initialize;

@end
