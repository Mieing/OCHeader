@class NSString, StarTrackData_BehaviorData;

@interface StarTrackData : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) unsigned long long starCreateTime;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) StarTrackData_BehaviorData *data;

+ (void)initialize;

@end
