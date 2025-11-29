@class NSString, NSError;

@interface BDFileUploadiOSDNSLocalParser : NSObject <BDFileUploadiOSDNSProtocol>

@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) double timeout;
@property (nonatomic) long long maxCount;
@property (nonatomic) BOOL isUserCancel;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isCancelled;
@property (copy, nonatomic) id /* block */ result;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parseDNS;
- (void)notifyError:(id)a0;
- (void)notifySuccess:(id)a0;
- (id)parseResult:(id)a0;
- (void)_resetInitialStates;
- (BOOL)cancelled;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)host;
- (id)initWithHost:(id)a0;
- (void)dealloc;
- (void)cancel;
- (long long)parserType;

@end
