@protocol IESIMStorageService;

@interface AWEIMRefreshStrage : NSObject

@property (retain, nonatomic) id<IESIMStorageService> storage;

+ (BOOL)setObject:(id)a0 forKey:(id)a1 err:(id *)a2;
+ (id)refreshStorage;
+ (id)objectForKey:(id)a0;

- (void).cxx_destruct;

@end
