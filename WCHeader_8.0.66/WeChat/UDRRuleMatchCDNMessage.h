@class NSString, UDRMatchRule, NSMutableArray, UDRExtInfo;

@interface UDRRuleMatchCDNMessage : WXPBGeneratedMessage

@property (retain, nonatomic) UDRMatchRule *matchRule;
@property (retain, nonatomic) NSString *projectId;
@property (retain, nonatomic) NSString *resourceName;
@property (nonatomic) unsigned int newResourceVersion;
@property (nonatomic) unsigned int newResourceSize;
@property (retain, nonatomic) NSString *newResourceMd5;
@property (retain, nonatomic) NSString *newResourceUrl;
@property (retain, nonatomic) NSMutableArray *diffList;
@property (retain, nonatomic) UDRExtInfo *extInfo;

+ (void)initialize;

@end
