@class NSString;

@interface MMWebA8KeyLiteParams : MMObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *referUrl;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long readerIndex;
@property (nonatomic) unsigned int scene;
@property (nonatomic) long long subBizScene;
@property (nonatomic) BOOL skipPrefetch;
@property (copy, nonatomic) NSString *extInfo;
@property (nonatomic) BOOL fromKara;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int appMsgInnerType;
@property (copy, nonatomic) NSString *prefetcherId;

- (void).cxx_destruct;

@end
