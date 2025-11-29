@class NSString;

@interface AWEHPTabAlphaTask : AWEHPBaseUIControlTask <AWEHPTabAlphaTaskProtocol>

@property (nonatomic) double alpha;
@property (copy, nonatomic) id /* block */ activateAlphaTaskHandler;
@property (copy, nonatomic) id /* block */ deactivateAlphaTaskHandler;
@property (copy, nonatomic) id /* block */ updateAlphaTaskHandler;
@property (readonly, nonatomic) BOOL isActivated;
@property (readonly, nonatomic) BOOL inEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
