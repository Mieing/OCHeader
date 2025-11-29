@class OrderedDictionary, NSString, NSObject;
@protocol IMBFileSystem, OS_dispatch_queue;

@interface MagicBrushFileSystemRegistry : NSObject <IMBFileSystem, IMagicBrushFileSystem>

@property (retain, nonatomic) id<IMBFileSystem> mDummyFS;
@property (retain, nonatomic) OrderedDictionary *mOrderedList;
@property (retain, nonatomic) OrderedDictionary *mCustomOrderedList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *orderListQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getOrderedFileSystemList;
- (id)getCustomOrderedFileSystemList;
- (void)addFStoCustomOrderedList:(id)a0 prefix:(id)a1;
- (id)findBizName:(id)a0;
- (id)findType:(id)a0;
- (id)findNonFlattenedFileSystem;
- (id)getDecodePath:(id)a0;
- (id)precondition:(id)a0;
- (id)findAppropriateFileSystem:(id)a0;
- (BOOL)access:(id)a0 error:(id *)a1;
- (id)readDir:(id)a0 error:(id *)a1;
- (id)stat:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)unlink:(id)a0 error:(id *)a1;
- (BOOL)unzip:(id)a0 targetDirectory:(id)a1 native:(BOOL)a2 error:(id *)a3;
- (id)readFile:(id)a0 position:(long long)a1 length:(long long)a2 error:(id *)a3;
- (BOOL)writeFile:(id)a0 data:(id)a1 isAppend:(BOOL)a2 error:(id *)a3;
- (BOOL)mkdir:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)rmdir:(id)a0 recursive:(BOOL)a1 native:(BOOL)a2 error:(id *)a3;
- (BOOL)saveFile:(id)a0 specifiedPath:(id)a1 error:(id *)a2;
- (BOOL)accept:(id)a0;
- (void).cxx_destruct;

@end
