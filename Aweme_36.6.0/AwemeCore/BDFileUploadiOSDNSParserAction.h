@class NSString;
@protocol BDFileUploadiOSDNSProtocol;

@interface BDFileUploadiOSDNSParserAction : NSObject <BDFileUploadiOSCancelable>

@property (nonatomic) BOOL isUserCancel;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) double waitSecond;
@property (nonatomic) long long backupType;
@property (retain, nonatomic) id<BDFileUploadiOSDNSProtocol> mainParser;
@property (retain, nonatomic) id<BDFileUploadiOSDNSProtocol> backParser;
@property (copy, nonatomic) id /* block */ result;
@property BOOL mainFinished;
@property BOOL backupFinished;
@property (copy, nonatomic) id /* block */ outResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configMainParseType:(long long)a0 backup:(long long)a1 wait:(double)a2;
- (void)_startBackupParser;
- (void)_dealWithResult:(id)a0 error:(id)a1;
- (id)_getItemInfo:(id)a0 info:(id)a1;
- (id)_mapArray:(id)a0 map:(id /* block */)a1;
- (id)_parserWithType:(long long)a0;
- (id)_errorDomain:(long long)a0;
- (BOOL)cancelled;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (id)host;
- (id)initWithHost:(id)a0;
- (void)dealloc;
- (void)cancel;

@end
