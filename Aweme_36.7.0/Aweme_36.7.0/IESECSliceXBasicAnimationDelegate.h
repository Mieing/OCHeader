@class NSString;

@interface IESECSliceXBasicAnimationDelegate : NSObject <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ startBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
