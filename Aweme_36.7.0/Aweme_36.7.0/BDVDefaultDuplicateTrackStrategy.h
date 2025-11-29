@class NSString, BDVBaseManager;

@interface BDVDefaultDuplicateTrackStrategy : NSObject <BDVDuplicateTrackStrategy>

@property (weak, nonatomic) BDVBaseManager *visiblerManager;
@property (copy, nonatomic) id /* block */ checkProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
