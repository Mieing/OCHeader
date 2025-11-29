@class HTSLivePreviewCjRpMessage_CjRp, HTSLiveCommon;

@interface HTSLivePreviewCjRpMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLivePreviewCjRpMessage_CjRp *cjrp;
@property (nonatomic) BOOL hasCjrp;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;

+ (id)descriptor;

@end
