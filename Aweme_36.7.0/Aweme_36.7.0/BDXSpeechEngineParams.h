@class NSString;

@interface BDXSpeechEngineParams : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appToken;
@property (copy, nonatomic) NSString *serverDomain;
@property (copy, nonatomic) NSString *serverPath;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *audioDirectoryPath;
@property (copy, nonatomic) NSString *requestParams;

- (id)initWithAppId:(id)a0 appToken:(id)a1 serverDomain:(id)a2 serverPath:(id)a3 resourceId:(id)a4 audioDirectoryPath:(id)a5 requestParams:(id)a6;
- (void).cxx_destruct;

@end
