@class NSMutableDictionary, NSRecursiveLock;

@interface WXGRoamPackageHandler : NSObject

@property (retain, nonatomic) NSRecursiveLock *handlerLock;
@property (nonatomic) unsigned long long msgListTotalSizeLimit;
@property (retain, nonatomic) NSMutableDictionary *producerMap;
@property (nonatomic) BOOL isSupportWxam;

+ (id)convertFrom:(id)a0;
+ (unsigned long long)mediaFiltered:(id)a0 svrIDs:(id)a1 mediaIDs:(id)a2 mediaTypes:(id)a3 resWithFilteredList:(id)a4;
+ (id)getMediaIDForMessage:(id)a0 dataID:(id)a1;

- (id)init;
- (id)getRoamPackage:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2 offset:(unsigned long long)a3 limit:(unsigned int)a4;
- (id)getRoamPackageFastly:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2 offset:(unsigned long long)a3 limit:(unsigned int)a4 TextOnly:(BOOL)a5;
- (id)getRoamPackageFastly:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2 offset:(unsigned long long)a3 limit:(unsigned int)a4 TextOnly:(BOOL)a5 needStatus:(BOOL)a6;
- (void).cxx_destruct;

@end
