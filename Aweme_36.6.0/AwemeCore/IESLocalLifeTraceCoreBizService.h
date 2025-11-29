@class NSString;

@interface IESLocalLifeTraceCoreBizService : HTSService <IESLocalLifeTraceCoreBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSourceTrace:(id)a0 pageParam:(id)a1 unitParam:(id)a2;
- (id)getCommonSourceTrace;
- (void)bindSourceTraceBtmPage:(id)a0;

@end
