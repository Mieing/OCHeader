@class NSString, NSNumber, NSMutableArray;

@interface IESLiveUGCVideoCellModel : NSObject

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *coverURL;
@property (retain, nonatomic) NSNumber *likeCount;
@property (nonatomic) BOOL hasLikeButton;
@property (nonatomic) int videoType;
@property (retain, nonatomic) NSMutableArray *MVUrlLsit;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL willPlay;
@property (nonatomic) BOOL isHighQuality;
@property (nonatomic) BOOL isLocked;

- (id)initWithOrderSingMVInfo:(id)a0;
- (BOOL)isWillPlayOrPlaying;
- (id)initWithMVInfo:(id)a0;
- (void).cxx_destruct;

@end
