@class NSString, NSMutableArray;

@interface AWEOriginalSoundTrackLocalTrackPage : NSObject

@property (retain, nonatomic) NSMutableArray *mediaList;
@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long showCount;
@property (nonatomic) BOOL canShowLoadMoreLabel;
@property (retain, nonatomic) NSString *queueId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL footerRequesting;

- (void).cxx_destruct;
- (id)init;

@end
