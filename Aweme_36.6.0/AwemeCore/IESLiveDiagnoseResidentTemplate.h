@class NSLock, NSHashTable;

@interface IESLiveDiagnoseResidentTemplate : NSObject

@property (retain, nonatomic) NSLock *safeLock;
@property (retain, nonatomic) NSHashTable *weakHashTable;

- (id)init;

@end
