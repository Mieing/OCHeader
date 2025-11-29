@class NSString;

@interface WCDBVacuumInfo : NSObject {
    int _tag;
}

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) unsigned long long freeSize;
@property (readonly, nonatomic) int tag;

- (BOOL)isChatDB;
- (void)setTag:(int)a0;
- (void).cxx_destruct;

@end
