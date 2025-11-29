@class NSString, NSMutableArray, FinderLiveCheerAnimationInfo_Resource;

@interface FinderLiveCheerAnimationInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *cheerIconInfo;
@property (retain, nonatomic) NSString *cheerButtonUrl;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) FinderLiveCheerAnimationInfo_Resource *landscapeResource;
@property (retain, nonatomic) FinderLiveCheerAnimationInfo_Resource *resource;
@property (retain, nonatomic) NSMutableArray *color;
@property (nonatomic) unsigned long long resourceId;
@property (nonatomic) unsigned long long totalDuration;
@property (nonatomic) unsigned long long bpm;

+ (void)initialize;

@end
