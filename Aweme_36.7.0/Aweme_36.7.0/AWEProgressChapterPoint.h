@class NSString, UIView;

@interface AWEProgressChapterPoint : NSObject

@property (nonatomic) double offset;
@property (nonatomic) double timestamp;
@property (nonatomic) double leftSide;
@property (nonatomic) double rightSide;
@property (copy, nonatomic) NSString *descString;
@property (retain, nonatomic) UIView *pointView;
@property (nonatomic) BOOL shouldShock;
@property (nonatomic) BOOL isAd;

- (void).cxx_destruct;

@end
