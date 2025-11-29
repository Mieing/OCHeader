@class NSString, NSData, NSMutableData, NSMutableArray;

@interface BDCastGCDWebServerMIMEStreamParser : NSObject {
    NSData *_boundary;
    NSString *_defaultcontrolName;
    int _state;
    NSMutableData *_data;
    NSMutableArray *_arguments;
    NSMutableArray *_files;
    NSString *_controlName;
    NSString *_fileName;
    NSString *_contentType;
    NSString *_tmpPath;
    int _tmpFile;
    BDCastGCDWebServerMIMEStreamParser *_subParser;
}

+ (void)initialize;

- (id)initWithBoundary:(id)a0 defaultControlName:(id)a1 arguments:(id)a2 files:(id)a3;
- (BOOL)_parseData;
- (BOOL)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isAtEnd;
- (void)dealloc;

@end
