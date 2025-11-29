@class NSString;

@interface DuetExtraInfoV2 : GPBMessage

@property (nonatomic) int duetReason;
@property (nonatomic) BOOL hasDuetReason;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
