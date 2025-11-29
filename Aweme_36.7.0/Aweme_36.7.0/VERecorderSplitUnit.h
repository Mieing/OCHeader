@class NSString, NSMutableDictionary;

@interface VERecorderSplitUnit : VEUnitObject <VEProcessSampleDelegate>

@property (retain, nonatomic) NSMutableDictionary *maxFrameRates;
@property (retain, nonatomic) NSMutableDictionary *lastFramePTSs;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
