@class NSMutableArray, BDCastGCDWebServerMIMEStreamParser;

@interface BDCastGCDWebServerMultiPartFormRequest : BDCastGCDWebServerRequest {
    BDCastGCDWebServerMIMEStreamParser *_parser;
}

@property (retain, nonatomic) NSMutableArray *arguments;
@property (retain, nonatomic) NSMutableArray *files;

+ (id)mimeType;

- (id)initWithMethod:(id)a0 url:(id)a1 headers:(id)a2 path:(id)a3 query:(id)a4;
- (id)firstArgumentForControlName:(id)a0;
- (id)firstFileForControlName:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)close:(id *)a0;
- (BOOL)open:(id *)a0;

@end
