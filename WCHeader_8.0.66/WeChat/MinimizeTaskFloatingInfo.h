@class NSString, MinimizeTaskContainerInfo, MinimizeTaskData;

@interface MinimizeTaskFloatingInfo : NSObject

@property (nonatomic) long long index;
@property (nonatomic) BOOL isFolded;
@property (nonatomic) BOOL isInactive;
@property (nonatomic) BOOL hasMultiTask;
@property (nonatomic) double inactiveScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } expandedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } foldedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstCardExpandedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastCardExpandedFrame;
@property (nonatomic) long long totalTaskCount;
@property (nonatomic) BOOL reverseXAxis;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (readonly, nonatomic) NSString *taskKey;
@property (readonly, nonatomic) NSString *taskBizName;
@property (readonly, nonatomic) NSString *taskBizKey;
@property (readonly, nonatomic) MinimizeTaskContainerInfo *contentInfo;

- (void).cxx_destruct;

@end
