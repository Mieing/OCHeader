@class NSString;

@interface IESGCPXPlayUtilRouterImpl : NSObject <IESGCPXPlayUtilRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchOpenInfoFromSchema:(id)a0;
- (id)appendInfoParams:(id)a0 toXPlaySchema:(id)a1;
- (id)fetchInfoFromXPlaySchema:(id)a0;

@end
