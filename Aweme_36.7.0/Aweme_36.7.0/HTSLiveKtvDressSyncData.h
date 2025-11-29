@class HTSLiveMidiSkinDressInfo, NSString;

@interface HTSLiveKtvDressSyncData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMidiSkinDressInfo *dressInfo;
@property (nonatomic) BOOL hasDressInfo;
@property (nonatomic) long long songId;
@property (copy, nonatomic) NSString *singerId;

+ (id)descriptor;

@end
