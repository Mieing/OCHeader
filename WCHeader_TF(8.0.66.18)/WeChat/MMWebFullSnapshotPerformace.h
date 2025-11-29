@interface MMWebFullSnapshotPerformace : NSObject

@property (nonatomic) unsigned int freeMemInKB;
@property (nonatomic) unsigned int predictImageMemInKB;
@property (nonatomic) unsigned int realImageMemInKB;
@property (nonatomic) struct CGSize { double width; double height; } originContentSize;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL isCompress;
@property (nonatomic) BOOL cropByLimitHeight;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long costTime;

- (id)description;

@end
