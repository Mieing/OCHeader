@class NSLock, NSMapTable;

@interface IESFeatureBizModelRecorder : NSObject

@property (nonatomic) long long maxSaveCount;
@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSLock *lock;

- (void)setModel:(id)a0 withAid:(id)a1;
- (id)modelWithAid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
