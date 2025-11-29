@class NSMutableSet, NSString, NSArray, NSData, FinderStreamDivider, FinderStreamTxtCard, FinderStreamCard;
@protocol WCFinderFeedLayoutContentVMDelegate;

@interface WCFinderFeedLayoutContentVM : WCFinderFeedContentVM

@property (copy, nonatomic) NSString *layoutID;
@property (copy, nonatomic) NSString *sortID;
@property (nonatomic) BOOL waittingRefresh;
@property (nonatomic) BOOL preLoadRefresh;
@property (weak, nonatomic) id<WCFinderFeedLayoutContentVMDelegate> delegate;
@property (retain, nonatomic) NSString *titleWording;
@property (retain, nonatomic) NSString *linkWording;
@property (copy, nonatomic) NSArray *cardFeedArray;
@property (retain, nonatomic) NSData *cardBuffer;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned long long fetchScene;
@property (retain, nonatomic) NSString *endWording;
@property (retain, nonatomic) NSString *secondTitle;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL hasMoreColumns;
@property (nonatomic) unsigned long long totalObjectCount;
@property (retain, nonatomic) FinderStreamCard *streamCard;
@property (retain, nonatomic) FinderStreamDivider *divider;
@property (retain, nonatomic) FinderStreamTxtCard *textCard;
@property (nonatomic) unsigned long long dividerType;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned long long exposeBeginTime;
@property (retain, nonatomic) NSMutableSet *exposeTidSet;

+ (BOOL)validDivider:(id)a0;

- (id)initWithDivider:(id)a0 scene:(int)a1 dataScene:(id)a2;
- (id)initWithStreamCard:(id)a0 scene:(int)a1 dataScene:(id)a2;
- (id)initWithSnSLiveList:(int)a0 dataScene:(id)a1;
- (void)setupWithCard:(id)a0;
- (void)setupContentDatas:(id)a0;
- (id)initWithDataItem:(id)a0 dataItemArray:(id)a1 lastBuffer:(id)a2 continueFlag:(BOOL)a3 scene:(int)a4 dataScene:(id)a5 titleWording:(id)a6;
- (id)contentTid;
- (unsigned long long)mediaType;
- (unsigned long long)rowForContent;
- (BOOL)isLayoutFeed;
- (void)removeCardBufferAtIndex:(unsigned long long)a0;
- (id)currentDisplayMediaInfo;
- (BOOL)isFeedContainVideo;
- (void).cxx_destruct;

@end
