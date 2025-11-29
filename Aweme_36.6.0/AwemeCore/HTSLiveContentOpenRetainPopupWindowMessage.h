@class HTSLiveCommon;

@interface HTSLiveContentOpenRetainPopupWindowMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int windowType;

+ (id)descriptor;

@end
