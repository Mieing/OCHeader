@class NSString;

@interface NunkiGetStrategyResult : NSObject <NunkiStrategyTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)execute:(id)a0;


@end
