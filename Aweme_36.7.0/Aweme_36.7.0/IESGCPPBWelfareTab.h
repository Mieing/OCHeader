@class NSMutableArray;

@interface IESGCPPBWelfareTab : GPBMessage

@property (nonatomic) BOOL showTab;
@property (retain, nonatomic) NSMutableArray *activityBannerArray;
@property (readonly, nonatomic) unsigned long long activityBannerArray_Count;

+ (id)descriptor;

@end
