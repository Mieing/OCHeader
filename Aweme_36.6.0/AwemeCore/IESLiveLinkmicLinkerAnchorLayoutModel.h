@class NSString;

@interface IESLiveLinkmicLinkerAnchorLayoutModel : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *focusUid;
@property (copy, nonatomic) NSString *focusLinkmicId;
@property (nonatomic) long long range;
@property (nonatomic) double changedLayoutTime;

- (void).cxx_destruct;

@end
