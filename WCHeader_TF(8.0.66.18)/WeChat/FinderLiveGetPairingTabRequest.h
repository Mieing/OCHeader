@class NSString;

@interface FinderLiveGetPairingTabRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSString *lastBuffer;

+ (void)initialize;

@end
