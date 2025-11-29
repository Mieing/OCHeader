@class NSString, HTSLiveCommon, HTSLiveAudioBGData;

@interface HTSLiveAudioBGImgMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveAudioBGData *bgList;
@property (nonatomic) BOOL hasBgList;
@property (nonatomic) int reviewPass;
@property (nonatomic) int bgType;
@property (copy, nonatomic) NSString *showText;
@property (nonatomic) int imageDisplayType;

+ (id)descriptor;

@end
