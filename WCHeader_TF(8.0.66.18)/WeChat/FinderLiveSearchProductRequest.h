@class NSString;

@interface FinderLiveSearchProductRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *searchWord;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *anchorFinderUsername;

+ (void)initialize;

@end
