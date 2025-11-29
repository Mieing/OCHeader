@class NSString;

@interface ACCFragmentBridgeFragment : NSObject <ACCCutSameStylePreviewFragmentProtocol>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } start;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) double lowerLeftX;
@property (nonatomic) double lowerLeftY;
@property (nonatomic) double lowerRightX;
@property (nonatomic) double lowerRightY;
@property (nonatomic) double upperLeftX;
@property (nonatomic) double upperLeftY;
@property (nonatomic) double upperRightX;
@property (nonatomic) double upperRightY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
