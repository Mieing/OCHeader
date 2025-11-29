@class NSString, NSMutableDictionary;

@interface IESIMMdViewReusePoolComponent : AWEIMComponentBase <IESIMMdViewReusePoolService>

@property (retain, nonatomic) NSMutableDictionary *reusePool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
