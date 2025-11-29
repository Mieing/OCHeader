@class NSString, NSData;

@interface FinderUnreadItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSData *recommendBuffer;

+ (void)initialize;

@end
