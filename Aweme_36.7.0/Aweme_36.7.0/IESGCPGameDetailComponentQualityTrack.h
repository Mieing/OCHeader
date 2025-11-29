@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface IESGCPGameDetailComponentQualityTrack : NSObject <IESGCPGameDetailComponentQualityTrackService>

@property (copy, nonatomic) NSString *trackId;
@property (retain, nonatomic) NSMutableDictionary *componentParseDuration;
@property (retain, nonatomic) NSMutableDictionary *componentMountDuration;
@property (retain, nonatomic) NSDictionary *commonParams;
@property (retain, nonatomic) NSMutableArray *necessaryComponentName;
@property (retain, nonatomic) NSMutableArray *reportedComponentName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traverseNode:(id)a0;
- (void)addCommonParams:(id)a0;
- (void)reportComponentErrorIfNeed:(id)a0;
- (id)initWithTrackId:(id)a0 diContext:(id)a1;
- (void)addComponent:(id)a0 parseDuration:(id)a1;
- (void)addComponent:(id)a0 mountDuration:(id)a1;
- (void)reportComponentConsume:(id)a0;
- (void).cxx_destruct;

@end
