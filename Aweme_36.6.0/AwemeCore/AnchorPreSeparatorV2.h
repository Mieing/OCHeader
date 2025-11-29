@class NSString;

@interface AnchorPreSeparatorV2 : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *differentialChar;
@property (nonatomic) BOOL hasDifferentialChar;

+ (id)descriptor;

- (int)type;

@end
