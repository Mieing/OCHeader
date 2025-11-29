@interface AWEModernFeedVideoCutConfig : NSObject

@property (nonatomic) double maxHeight;
@property (nonatomic) double judgeRatio;
@property (nonatomic) double displayRatio;
@property (nonatomic) double verticalVideoMaxWidth;
@property (nonatomic) double horizontalVideoMaxWidth;
@property (nonatomic) unsigned long long videoCutType;

- (id)init;

@end
