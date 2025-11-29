@class NSData, FinderContact, NSString;

@interface FinderMusicMVTopicInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long musicMvTopicId;
@property (retain, nonatomic) NSData *finderObject;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *recommendReason;

+ (void)initialize;

@end
