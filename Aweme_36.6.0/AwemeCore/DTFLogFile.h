@class NSString;

@interface DTFLogFile : NSObject {
    int _fd;
    NSString *_name;
    unsigned long long _maxSize;
    double _maxLive;
    NSString *_filePath;
}

@property (nonatomic) BOOL uploadable;
@property (nonatomic) unsigned long long triggerCount;
@property (copy, nonatomic) id /* block */ timeFilter;
@property (nonatomic) long long size;
@property (nonatomic) unsigned long long unSyncCount;

+ (char *)checkCode;
+ (id)logFileWithName:(id)a0;

- (BOOL)isExist;
- (BOOL)isUsing;
- (void)removeWeakCache;
- (void)markFile;
- (BOOL)isMarked;
- (id)writeLog:(id)a0;
- (id)dataForIndex:(id)a0;
- (void)markIndex:(id)a0;
- (id)makeUnSyncLogIndex;
- (id)indexFromOffset:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (void)dealloc;
- (BOOL)shouldFlush;

@end
