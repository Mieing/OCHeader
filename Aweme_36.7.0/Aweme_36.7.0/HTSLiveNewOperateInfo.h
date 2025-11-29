@class NSString, HTSLiveText;

@interface HTSLiveNewOperateInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *creatorText;
@property (nonatomic) BOOL hasCreatorText;
@property (copy, nonatomic) NSString *creatorUid;

+ (id)descriptor;

@end
