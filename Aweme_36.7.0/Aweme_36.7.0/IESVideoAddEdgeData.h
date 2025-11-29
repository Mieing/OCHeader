@interface IESVideoAddEdgeData : NSObject

@property (nonatomic) double red;
@property (nonatomic) double green;
@property (nonatomic) double blue;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGSize { double width; double height; } targetFrameSize;
@property (nonatomic) long long addEdgeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoFrameRect;

+ (id)videoEdgeModeDataFromDic:(id)a0;

- (id)edgeModeDataToDic;
- (id)init;

@end
