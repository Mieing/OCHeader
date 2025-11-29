@class NSMutableArray;

@interface TTDownloadLogLite : JSONModel

@property (retain) NSMutableArray *errorLogArray;

- (void)addDownloadLog:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
