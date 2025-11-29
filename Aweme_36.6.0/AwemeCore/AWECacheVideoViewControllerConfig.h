@class NSString;

@interface AWECacheVideoViewControllerConfig : NSObject <AWECacheVideoViewControllerConfigProtocol>

@property (nonatomic) unsigned long long listType;
@property (nonatomic) BOOL loadPreviousDisable;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) Class cellClass;
@property (nonatomic) BOOL selectAllEnable;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
