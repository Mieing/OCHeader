@class NSString, HTSLiveCommon;

@interface HTSLiveVsPanelMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
