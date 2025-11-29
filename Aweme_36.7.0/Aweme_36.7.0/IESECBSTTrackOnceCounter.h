@class NSLock, NSMapTable;

@interface IESECBSTTrackOnceCounter : NSObject

@property (copy, nonatomic) NSMapTable *containerMap;
@property (retain, nonatomic) NSLock *lock;

+ (id)shared;

- (id)uniqueKeyOfUniqueObject:(id)a0;
- (BOOL)shouldCallWithContainer:(id)a0 uniqueKey:(id)a1;
- (void)clearReportCountOfUniqueContainer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
