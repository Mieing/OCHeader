@class NSString;

@interface WCStoryPostCgiObj : WCStoryBaseCGIObj

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *videoMd5;
@property (retain, nonatomic) NSString *postXml;
@property (nonatomic) unsigned int createTime;
@property (copy, nonatomic) id /* block */ postFailBlock;
@property (copy, nonatomic) id /* block */ postSuccessBlock;
@property (copy, nonatomic) id /* block */ postHadRecieveRespBlock;

- (id)initWithTaskInfo:(id)a0;
- (void)onUploadSuccessWithResponse:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
