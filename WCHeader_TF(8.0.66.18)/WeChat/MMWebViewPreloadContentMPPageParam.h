@class NSString;

@interface MMWebViewPreloadContentMPPageParam : NSObject

@property (copy, nonatomic) NSString *pageFrameUrl;
@property (nonatomic) unsigned int templateType;
@property (nonatomic) unsigned int templateVersion;
@property (copy, nonatomic) NSString *templateFullVersion;
@property (copy, nonatomic) NSString *latestTemplateFullVersion;
@property (nonatomic) unsigned int templateReportId;
@property (copy, nonatomic) NSString *templateVersionGroup;
@property (nonatomic) BOOL isOfflineCache;
@property (copy, nonatomic) NSString *sourceUserName;

- (id)description;
- (void).cxx_destruct;

@end
