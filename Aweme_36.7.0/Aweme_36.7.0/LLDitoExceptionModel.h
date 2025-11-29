@class NSError, NSString, NSDictionary;

@interface LLDitoExceptionModel : NSObject <LLDitoLogInfoProtocol>

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *exceptionType;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) unsigned long long logLevel;
@property (copy, nonatomic) NSString *ditoPage;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *errorType;
@property (nonatomic) BOOL isDitoError;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *containerType;
@property (nonatomic) unsigned long long logType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorWithDomain:(id)a0 errorCode:(long long)a1 node:(id)a2 errorMessage:(id)a3 extraParams:(id)a4;

- (id)fetchLogDescription;
- (id)fetchLogParams;
- (id)logTypeInString;
- (id)initWithExceptionType:(id)a0 error:(id)a1 infoLevel:(unsigned long long)a2 reportType:(unsigned long long)a3 extraParams:(id)a4;
- (id)initWithError:(id)a0 DitoExceptionType:(id)a1 infoLevel:(unsigned long long)a2 extraParams:(id)a3;
- (void).cxx_destruct;
- (id)getError;

@end
