@class NSString, NSDictionary;

@interface MMWebPrefetchDownloadTaskRequest : MMObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned int requestId;
@property (retain, nonatomic) NSDictionary *requestHeader;
@property (copy, nonatomic) NSString *pathForRespHeader;
@property (copy, nonatomic) NSString *pathForRespData;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subScene;
@property (nonatomic) BOOL isUsingSingtonVM;

- (void).cxx_destruct;

@end
