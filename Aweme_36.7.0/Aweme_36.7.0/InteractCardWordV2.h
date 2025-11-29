@class NSString;

@interface InteractCardWordV2 : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (copy, nonatomic) NSString *recExtra;
@property (nonatomic) BOOL hasRecExtra;

+ (id)descriptor;

@end
