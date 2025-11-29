@class NSString, NSMapTable;

@interface CKSChangeRecorder : NSObject <CKScorageRootRecorder, CKScorageScopeRecorder>

@property (retain, nonatomic) NSMapTable *changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
