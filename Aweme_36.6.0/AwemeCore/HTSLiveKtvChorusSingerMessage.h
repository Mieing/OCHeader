@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveKtvChorusSingerMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long roomId;
@property (nonatomic) long long chorusId;
@property (nonatomic) long long segment;
@property (retain, nonatomic) NSMutableArray *chorusInfosArray;
@property (readonly, nonatomic) unsigned long long chorusInfosArray_Count;

+ (id)descriptor;

@end
