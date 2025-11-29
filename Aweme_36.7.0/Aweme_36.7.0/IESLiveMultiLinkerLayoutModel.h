@class NSString;

@interface IESLiveMultiLinkerLayoutModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *focusUid;
@property (copy, nonatomic) NSString *focusLinkmicId;
@property (nonatomic) long long range;
@property (nonatomic) double changedLayoutTime;

- (void).cxx_destruct;

@end
