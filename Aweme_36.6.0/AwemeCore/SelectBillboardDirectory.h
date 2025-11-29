@class NSString;

@interface SelectBillboardDirectory : GPBMessage

@property (nonatomic) long long term;
@property (nonatomic) BOOL hasTerm;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;

+ (id)descriptor;

@end
