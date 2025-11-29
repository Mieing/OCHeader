@class HTSLiveText;

@interface IESLiveListUserEventInfo : IESLivePBBaseMessage

@property (nonatomic) int eventInfoType;
@property (retain, nonatomic) HTSLiveText *content;
@property (nonatomic) BOOL hasContent;

+ (id)descriptor;

@end
