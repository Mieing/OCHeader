@class NSString, FinderOriginalTypeItem;
@protocol WCFinderEditMusicMediaAudioUrlAdapter;

@interface WCFinderEditMusicInfoFeedCtx : NSObject

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *originalId;
@property (retain, nonatomic) FinderOriginalTypeItem *originalItem;
@property (copy, nonatomic) id /* block */ onComplete;
@property (retain, nonatomic) id<WCFinderEditMusicMediaAudioUrlAdapter> adapter;

- (void).cxx_destruct;

@end
