@class NSString, HTSLiveImage;

@interface HTSLiveHeaderMedia_ViewButton : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) int schemaType;

+ (id)descriptor;

@end
