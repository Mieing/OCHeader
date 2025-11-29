@class NSString, WCTempSaveModel;

@interface TempSaveFileOperation : NSOperation

@property (retain, nonatomic) WCTempSaveModel *model;
@property (retain, nonatomic) NSString *filePath;

+ (id)operationWithModel:(id)a0 filePath:(id)a1;

- (void)main;
- (void).cxx_destruct;

@end
