@class NSString, NSMutableArray;

@interface UDRGetResourceDescriptionReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSMutableArray *resourceName;
@property (retain, nonatomic) NSMutableArray *localResources;
@property (retain, nonatomic) NSMutableArray *projectParameters;
@property (nonatomic) unsigned int qos;
@property (retain, nonatomic) NSMutableArray *appParameters;

+ (void)initialize;

- (void)setAppParameters:(id)a0;
- (id)appParameters;
- (void)setQos:(unsigned int)a0;
- (unsigned int)qos;
- (void)setProjectParameters:(id)a0;
- (id)projectParameters;
- (void)setLocalResources:(id)a0;
- (id)localResources;
- (void)setResourceName:(id)a0;
- (id)resourceName;
- (void)setProjectId:(id)a0;
- (id)projectId;

@end
