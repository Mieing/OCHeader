@class NSString, SECMetrics;

@interface SECRomaGurdProvider : NSObject <SECRomaProvider>

@property (retain, nonatomic) SECMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)missingAKError;
- (id)gurdInvalidErrorFor:(long long)a0 message:(id)a1;
- (id)serializeJSON:(id)a0 error:(id *)a1;
- (id)wrongFormatError;
- (id)fileNotExistError;
- (id)jsonFailedError;
- (id)fetchRomaWithError:(id *)a0;
- (void).cxx_destruct;
- (id)identifier;

@end
