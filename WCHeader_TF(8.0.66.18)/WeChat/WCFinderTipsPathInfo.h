@class NSString, NSMutableSet, WCFinderRedDotThreadSafeSet;

@interface WCFinderTipsPathInfo : NSObject

@property (nonatomic) BOOL optimizeContainerUseGCDSafeThreadStrategy;
@property (retain, nonatomic) NSMutableSet *tipsUuidSet;
@property (retain, nonatomic) WCFinderRedDotThreadSafeSet *gcdSafeUuidSet;
@property (retain, nonatomic) NSString *nsPathKey;

- (id)init;
- (void)uuidContainerAddObject:(id)a0;
- (void)uuidContainerRemoveObject:(id)a0;
- (id)uuidContainerMutableCopy;
- (unsigned long long)uuidContainerCount;
- (void)uuidContainerEnumerateObjectsUsingBlock:(id /* block */)a0;
- (void)_synchronizedAddObjectToTipsUuidSet:(id)a0;
- (void)_synchronizedRemoveObjectToTipsUuidSet:(id)a0;
- (id)_synchronizedMutableCopyTipsUuidSet;
- (void).cxx_destruct;

@end
