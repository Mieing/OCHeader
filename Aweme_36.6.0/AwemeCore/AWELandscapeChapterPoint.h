@class UIView;

@interface AWELandscapeChapterPoint : NSObject

@property (retain, nonatomic) UIView *pointView;
@property (nonatomic) double offset;
@property (nonatomic) double timestamp;
@property (nonatomic) double leftSide;
@property (nonatomic) double leftSideTimestamp;
@property (nonatomic) double rightSide;
@property (nonatomic) double rightSideTimestamp;
@property (nonatomic) BOOL shouldShock;
@property (nonatomic) BOOL isAd;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
