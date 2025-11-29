@class NSString, HTSLiveCommon, HTSLiveText;

@interface HTSLivePCAnchorRoomDataChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveText *topText;
@property (nonatomic) BOOL hasTopText;
@property (retain, nonatomic) HTSLiveText *bottomText;
@property (nonatomic) BOOL hasBottomText;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
