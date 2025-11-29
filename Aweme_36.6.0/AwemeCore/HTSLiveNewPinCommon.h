@class HTSLiveNewOperateInfo, HTSLiveText;

@interface HTSLiveNewPinCommon : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *topTitle;
@property (nonatomic) BOOL hasTopTitle;
@property (retain, nonatomic) HTSLiveNewOperateInfo *operateInfo;
@property (nonatomic) BOOL hasOperateInfo;

+ (id)descriptor;

@end
