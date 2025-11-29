@class NSURL, WCFinderCropRectModel;

@interface WCFinderOpenCoverVCParams : NSObject

@property (retain, nonatomic) NSURL *photoCoverUrl;
@property (nonatomic) double coverTimeStamp;
@property (nonatomic) int coverShowStyle;
@property (retain, nonatomic) WCFinderCropRectModel *cropRectModel;

- (void).cxx_destruct;

@end
