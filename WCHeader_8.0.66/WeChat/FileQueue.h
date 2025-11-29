@class NSString;

@interface FileQueue : NSObject {
    NSString *m_nsFilePath;
    int m_codingMethod;
    Class m_elementClass;
}

- (id)initWithNSCodingFilePath:(id)a0;
- (void)dealloc;
- (id)getArchiveTarget;
- (void)setUnArchiveResult:(id)a0;
- (BOOL)syncToFile;
- (BOOL)push:(id)a0;
- (BOOL)modifyTop:(id)a0;
- (id)getTop;
- (BOOL)pop;
- (id)getAll;
- (BOOL)clear;
- (void).cxx_destruct;

@end
