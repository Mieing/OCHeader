@class NSString, NSMutableDictionary, NSDictionary, NSNumber;

@interface IESLiveInteractionTrackerContextImpl : IESLiveInteractionTrackerParamsModel <IESLiveInteractionTrackerContext>

@property (copy, nonatomic) NSString *audienceLinkmicSource;
@property (copy, nonatomic) NSString *linkSource;
@property (copy, nonatomic) NSString *playmodeSource;
@property (copy, nonatomic) NSNumber *isDuringMin;
@property (retain, nonatomic) NSMutableDictionary *componentLeaveRoomExtra;
@property (copy, nonatomic) NSString *clickSource;
@property (retain, nonatomic) NSDictionary *layoutChangeExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
