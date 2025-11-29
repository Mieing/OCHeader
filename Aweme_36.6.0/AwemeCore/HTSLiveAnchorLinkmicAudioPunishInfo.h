@class NSString, NSMutableArray;

@interface HTSLiveAnchorLinkmicAudioPunishInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *schemaURL;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long remainSeconds;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) NSMutableArray *punishedLinkmicIdStrListArray;
@property (readonly, nonatomic) unsigned long long punishedLinkmicIdStrListArray_Count;

+ (id)descriptor;

@end
