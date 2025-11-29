@class NSString, UIView;

@interface IESECPDPEventPassthroughObjc : NSObject

@property (copy, nonatomic) NSString *sliceID;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) UIView *activeView;
@property (retain, nonatomic) NSString *actionMonitorID;

- (void).cxx_destruct;

@end
