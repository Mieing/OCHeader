@class NSNumber, NSString;

@interface IESLiveInteractionLinkerApplyParams : IESLiveInteractionLinkerParams

@property (retain, nonatomic) NSNumber *mode;
@property (retain, nonatomic) NSNumber *position;
@property (retain, nonatomic) NSNumber *muteState;
@property (nonatomic) unsigned long long applySource;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *applyReason;

- (void).cxx_destruct;

@end
