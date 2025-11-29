@class NSString;

@interface GetRoomIntroResponse_Data_PoiInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *defaultIntro;

+ (id)descriptor;

@end
