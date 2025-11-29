@class NSString, NSDictionary;

@interface AWEYAPProjectNPreloadInfo : NSObject <AWEYAPProjectNPreloadInfo>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *tid;
@property (nonatomic) BOOL isColdLaunch;
@property (retain, nonatomic) NSDictionary *ext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
