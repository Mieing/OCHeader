@class NSString, NSMutableArray;

@interface GuideBtnStructV2 : GPBMessage

@property (copy, nonatomic) NSString *config;
@property (nonatomic) BOOL hasConfig;
@property (retain, nonatomic) NSMutableArray *buttonsArray;
@property (readonly, nonatomic) unsigned long long buttonsArray_Count;

+ (id)descriptor;

@end
