@class NSString, NSDictionary;

@interface HMDFileUploadRequest : NSObject <HMDURLPathProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *logType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL byUser;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) id /* block */ finishDetailBlock;

- (id)URLPathProviderURLPath:(id)a0;
- (void).cxx_destruct;

@end
