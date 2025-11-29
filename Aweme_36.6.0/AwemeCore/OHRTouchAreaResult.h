@class NSString;
@protocol OHRTouchArea;

@interface OHRTouchAreaResult : NSObject <OHRTouchAreaResult>

@property (nonatomic) long long hand;
@property (retain, nonatomic) id<OHRTouchArea> touchArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
