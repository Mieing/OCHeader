@class NSString;

@interface TabGuideLabelInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *replaceLabelText;
@property (nonatomic) BOOL hasReplaceLabelText;
@property (copy, nonatomic) NSString *clientExtra;
@property (nonatomic) BOOL hasClientExtra;
@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) BOOL hasComponentId;
@property (copy, nonatomic) NSString *targetTabId;
@property (nonatomic) BOOL hasTargetTabId;

+ (id)descriptor;

@end
