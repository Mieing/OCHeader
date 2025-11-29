@class NSDictionary, NSArray, NSString;
@protocol OHRSlideSpeedFeature, OHRTouchFeature;

@interface OHRResult : NSObject <OHRResult>

@property (nonatomic) long long hand;
@property (nonatomic) double confidence;
@property (retain, nonatomic) id<OHRSlideSpeedFeature> slideSpeed;
@property (retain, nonatomic) id<OHRTouchFeature> touch;
@property (retain, nonatomic) NSDictionary *inputParams;
@property (copy, nonatomic) NSArray *currentSampleTouchEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
