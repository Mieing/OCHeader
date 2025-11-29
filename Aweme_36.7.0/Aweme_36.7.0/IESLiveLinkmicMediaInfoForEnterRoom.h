@class NSString;

@interface IESLiveLinkmicMediaInfoForEnterRoom : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *linkmicIdStr;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;

+ (id)descriptor;

@end
