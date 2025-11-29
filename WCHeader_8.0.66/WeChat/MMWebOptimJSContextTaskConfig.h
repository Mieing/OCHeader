@class NSString, NSData;

@interface MMWebOptimJSContextTaskConfig : MMObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *manifestUrl;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned int bizScene;
@property (nonatomic) unsigned int subBizScene;
@property (retain, nonatomic) NSData *businessData;
@property (retain, nonatomic) NSData *jsapiControlBytesData;

- (BOOL)isValid;
- (id)taskId;
- (id)description;
- (void).cxx_destruct;

@end
