@class NSMutableArray, CMessageWrap;

@interface UploadTaskGenerateProcessor : UploadStateProcessor

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSMutableArray *uploadTaskList;

- (id)initWithContext:(id)a0;
- (void)start;
- (id)getStateName;
- (void)generateUploadTaskWithDataList:(id)a0;
- (void).cxx_destruct;

@end
