@class NSString, NSArray, NSMutableDictionary, UIResponder;

@interface BTMNode : NSObject <BTMAssociateStorageType, NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *timeStamp;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } readWriteLock;
@property (retain, nonatomic) BTMNode *previousNode;
@property (copy, nonatomic) NSString *info;
@property (weak, nonatomic) UIResponder *invokePage;
@property (retain, nonatomic) NSArray *allowedTargetPageIdentifiers;
@property (weak, nonatomic) UIResponder *targetPage;
@property (nonatomic) BOOL preserve;
@property (copy, nonatomic) NSString *showId;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSMutableDictionary *associateStorage;
@property (nonatomic) BOOL isSourceBtmToken;
@property (nonatomic) BOOL sourceBtmTokenConsumed;
@property (nonatomic) BOOL sourceBtmTokenOverTimeReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)btm_getValueForKey:(id)a0;
- (void)btm_setValue:(id)a0 forKey:(id)a1;
- (id)createDefaultCopy;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
