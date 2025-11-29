@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveAnchorLinkGameVoiceMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) NSMutableArray *voiceInfosArray;
@property (readonly, nonatomic) unsigned long long voiceInfosArray_Count;
@property (copy, nonatomic) NSString *openUid;

+ (id)descriptor;

@end
