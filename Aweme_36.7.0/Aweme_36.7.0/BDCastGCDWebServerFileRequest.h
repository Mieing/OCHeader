@class NSString;

@interface BDCastGCDWebServerFileRequest : BDCastGCDWebServerRequest {
    int _file;
}

@property (readonly, nonatomic) NSString *temporaryPath;

- (id)initWithMethod:(id)a0 url:(id)a1 headers:(id)a2 path:(id)a3 query:(id)a4;
- (void).cxx_destruct;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)close:(id *)a0;
- (void)dealloc;
- (BOOL)open:(id *)a0;

@end
