@class NSString;

@interface FinderMVInfo_ClientDraftInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long draftObjectId;
@property (retain, nonatomic) NSString *draftNonceId;
@property (nonatomic) unsigned int draftSource;
@property (nonatomic) unsigned long long postingClipOffsetMs;

+ (void)initialize;

@end
