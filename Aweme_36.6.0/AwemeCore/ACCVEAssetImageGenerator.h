@class NSString, NLEInterface_OC;

@interface ACCVEAssetImageGenerator : NSObject <ACCFrameExtracting>

@property (retain, nonatomic) NLEInterface_OC *session;
@property (nonatomic) struct CGSize { double width; double height; } resourceSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } requestedTimeToleranceBefore;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } requestedTimeToleranceAfter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
