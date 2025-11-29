@class NSString;

@interface FinderObjectDigestItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long digestId;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) unsigned int liked;

+ (void)initialize;

@end
