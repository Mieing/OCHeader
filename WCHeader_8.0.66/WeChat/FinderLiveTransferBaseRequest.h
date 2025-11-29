@class NSString;

@interface FinderLiveTransferBaseRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *authorFinderUsername;

+ (void)initialize;

@end
