@class NSString;

@interface CommerceConfigDataStruct : GPBMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) int projectId;
@property (nonatomic) BOOL hasProjectId;
@property (nonatomic) int styleId;
@property (nonatomic) BOOL hasStyleId;
@property (copy, nonatomic) NSString *projectName;
@property (nonatomic) BOOL hasProjectName;
@property (copy, nonatomic) NSString *styleName;
@property (nonatomic) BOOL hasStyleName;

+ (id)descriptor;

@end
