@class NSString, NSArray;

@interface WCAdLiveInfo : NSObject <NSCoding>

@property (nonatomic) int liveType;
@property (retain, nonatomic) NSString *liveParams;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderLiveId;
@property (retain, nonatomic) NSArray *pendingDescList;
@property (retain, nonatomic) NSArray *livingDescList;
@property (retain, nonatomic) NSArray *endDescList;
@property (nonatomic) BOOL showLikeAnimation;
@property (nonatomic) double likeAnimationInterval;
@property (retain, nonatomic) NSArray *liveCheerIconList;
@property (nonatomic) int liveStatus;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isLiveQueryInfoValid;
- (void).cxx_destruct;

@end
