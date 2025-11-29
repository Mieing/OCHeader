@class NSString, HTSLiveCommon;

@interface HTSLiveCommonPopupMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) BOOL anchorPopUp;

+ (id)descriptor;

@end
