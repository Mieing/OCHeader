@class NSString, NSMutableArray;

@interface UDRGetResourceDescriptionReqItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSMutableArray *resourceName;
@property (retain, nonatomic) NSMutableArray *localResources;
@property (retain, nonatomic) NSMutableArray *projectParameters;
@property (nonatomic) unsigned int qos;

+ (void)initialize;

@end
