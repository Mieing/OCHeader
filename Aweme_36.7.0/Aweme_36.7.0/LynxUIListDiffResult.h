@class NSArray;

@interface LynxUIListDiffResult : NSObject

@property (readonly, nonatomic) NSArray *removePaths;
@property (readonly, nonatomic) NSArray *insertPaths;
@property (readonly, nonatomic) NSArray *updateFromPaths;
@property (readonly, nonatomic) NSArray *updateToPaths;
@property (readonly, nonatomic) NSArray *moveFromPaths;
@property (readonly, nonatomic) NSArray *moveToPaths;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

- (id)initWithDiffResult:(const void *)a0;
- (id)initWithNumberOfInsertions:(unsigned long long)a0;
- (id)initWithUpdateFromPath:(id)a0 updateToPath:(id)a1 removePath:(id)a2 insertPath:(id)a3 moveFromPath:(id)a4 moveToPath:(id)a5;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
