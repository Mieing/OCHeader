@class NSArray, NSData;

@interface AWEIMLandingSnapShotLaunchStorage : NSObject

@property (retain, nonatomic) NSArray *snapShotModelList;
@property (retain, nonatomic) NSData *snapShotData;
@property (nonatomic) BOOL isIMDylibLoaded;

+ (id)storageKey:(id)a0;
+ (id)shared;

- (void)asyncPreloadChatSnapShotDataWithGroup:(id)a0;
- (id)p_getStoredData;
- (void)doTaskAfterIMDylibLoadedWithSkylightTask:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clear;

@end
