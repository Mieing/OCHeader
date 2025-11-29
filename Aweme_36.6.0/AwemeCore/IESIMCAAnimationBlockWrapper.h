@class NSString;

@interface IESIMCAAnimationBlockWrapper : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ startedBlock;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
