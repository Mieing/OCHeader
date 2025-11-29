@interface ToygerFileService : NSObject

+ (BOOL)saveFile:(id)a0 atPath:(id)a1;
+ (id)loadFile:(id)a0;
+ (BOOL)checkFile:(id)a0;
+ (void)makeFolder:(id)a0;
+ (void)deleteFolder:(id)a0;

@end
