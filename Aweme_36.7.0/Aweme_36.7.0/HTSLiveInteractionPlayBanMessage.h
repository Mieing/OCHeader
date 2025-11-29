@class NSString, HTSLiveCommon;

@interface HTSLiveInteractionPlayBanMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailURL;

+ (id)descriptor;

@end
