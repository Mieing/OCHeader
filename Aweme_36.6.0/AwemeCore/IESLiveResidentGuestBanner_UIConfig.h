@class NSString, NSMutableArray;

@interface IESLiveResidentGuestBanner_UIConfig : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *gradientColorArray;
@property (readonly, nonatomic) unsigned long long gradientColorArray_Count;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *textColor;

+ (id)descriptor;

@end
