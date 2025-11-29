@class NSMutableArray;

@interface EmoticonEditImageTracker : NSObject

@property (nonatomic) unsigned int clickTextBtnCount;
@property (nonatomic) unsigned int clickCropBtnCount;
@property (nonatomic) unsigned int zoomInOutCount;
@property (retain, nonatomic) NSMutableArray *actionTraceArray;

- (id)init;
- (void).cxx_destruct;

@end
