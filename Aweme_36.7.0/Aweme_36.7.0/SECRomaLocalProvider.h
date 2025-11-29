@class NSString, SECMetrics;

@interface SECRomaLocalProvider : NSObject <SECRomaProvider>

@property (retain, nonatomic) SECMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)unzipError:(id *)a0;
- (id)serializeJSON:(id)a0 error:(id *)a1;
- (id)wrongFormatError;
- (id)unzipFailedError;
- (id)fileNotExistError;
- (id)jsonFailedError;
- (id)localInvalidErrorFor:(id)a0;
- (id)fetchRomaWithError:(id *)a0;
- (void).cxx_destruct;
- (id)identifier;

@end
