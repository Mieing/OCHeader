@class NSString, UIImageView, UIImage;

@interface BDImageSensibleMonitor : NSObject

@property (class, nonatomic) BOOL reportIgnoreView;

@property (nonatomic) double imageStartTime;
@property (nonatomic) double imageEndTime;
@property (nonatomic) BOOL monitorWithService;
@property (nonatomic) BOOL monitorWithLogType;
@property (nonatomic) long long index;
@property (nonatomic) long long from;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageTag;
@property (nonatomic) unsigned long long exceptionTag;
@property (copy, nonatomic) NSString *imageURL;
@property (weak, nonatomic) UIImageView *requestView;
@property (weak, nonatomic) UIImage *requestImage;

- (void)startImageSensibleMonitor;
- (void)trackImageSensibleMonitor;
- (BOOL)isDisplayedInScreen:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
