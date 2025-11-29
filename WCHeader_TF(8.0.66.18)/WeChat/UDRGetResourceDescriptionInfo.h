@class NSString, NSMutableArray;

@interface UDRGetResourceDescriptionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSString *resourceName;
@property (retain, nonatomic) NSMutableArray *localResources;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (void)initialize;

@end
