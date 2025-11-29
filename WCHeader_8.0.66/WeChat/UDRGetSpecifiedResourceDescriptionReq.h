@class NSString;

@interface UDRGetSpecifiedResourceDescriptionReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int resourceVersion;

+ (void)initialize;

@end
