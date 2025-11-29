@class NSString, HTSLiveCommon, HTSLiveTopEffectMessage_Extra, NSMutableArray;

@interface HTSLiveTopEffectMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long assetId;
@property (nonatomic) long long priority;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long endTime;
@property (nonatomic) long long fadeInDuration;
@property (nonatomic) long long fadeOutDuration;
@property (retain, nonatomic) NSMutableArray *imagesArray;
@property (readonly, nonatomic) unsigned long long imagesArray_Count;
@property (retain, nonatomic) NSMutableArray *textsArray;
@property (readonly, nonatomic) unsigned long long textsArray_Count;
@property (retain, nonatomic) HTSLiveTopEffectMessage_Extra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
