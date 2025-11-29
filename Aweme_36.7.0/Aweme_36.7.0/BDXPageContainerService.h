@class NSString;
@protocol BDXDisableSwipeServiceProtocol;

@interface BDXPageContainerService : NSObject <BDXPageContainerServiceProtocol>

@property (retain, nonatomic) id<BDXDisableSwipeServiceProtocol> disableSwipeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (id)create:(id)a0 context:(id)a1;
- (id)open:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
