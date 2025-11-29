@class NSString, NSData;

@interface FinderLiveProductLikeRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSData *productBuffer;
@property (nonatomic) BOOL isCancel;

+ (void)initialize;

@end
