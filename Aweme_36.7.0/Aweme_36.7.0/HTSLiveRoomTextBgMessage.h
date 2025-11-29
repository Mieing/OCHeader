@class NSString, HTSLiveCommon, HTSLiveRoomTextBg;

@interface HTSLiveRoomTextBgMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveRoomTextBg *textBg;
@property (nonatomic) BOOL hasTextBg;
@property (nonatomic) long long placeholder;
@property (copy, nonatomic) NSString *source;

+ (id)descriptor;

@end
