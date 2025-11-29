@class NSString;

@interface AWEMateRelationService : HTSService <AWEMateRelationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mateList;
- (id)mateCount;
- (id)mateState;

@end
