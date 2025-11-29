@class NSString;

@interface UDRGetSpecifiedResourceMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int resourceVersion;
@property (retain, nonatomic) NSString *onceExtInfo;

+ (void)initialize;

@end
