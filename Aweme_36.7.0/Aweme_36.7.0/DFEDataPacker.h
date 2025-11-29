@class NSString, NSMutableArray;

@interface DFEDataPacker : NSObject {
    unsigned long long estimatedLength;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *storeIndexes;
@property (copy, nonatomic) NSString *launchId;
@property (nonatomic) unsigned long long maximumLength;
@property (readonly) BOOL avalible;

- (BOOL)isAvalible;
- (BOOL)inLaunch:(id)a0;
- (id)payload;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)indexes;
- (BOOL)append:(id)a0;

@end
