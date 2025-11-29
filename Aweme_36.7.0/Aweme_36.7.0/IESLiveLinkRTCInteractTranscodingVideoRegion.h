@class NSString;

@interface IESLiveLinkRTCInteractTranscodingVideoRegion : NSObject

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long zOrder;
@property (nonatomic) double alpha;
@property (nonatomic) long long contentControl;
@property (nonatomic) unsigned long long renderMode;

- (void).cxx_destruct;

@end
