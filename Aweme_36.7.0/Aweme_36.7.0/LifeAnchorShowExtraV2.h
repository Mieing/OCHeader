@class NSString;

@interface LifeAnchorShowExtraV2 : GPBMessage

@property (nonatomic) int anchorType;
@property (nonatomic) BOOL hasAnchorType;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL hasShouldShow;
@property (nonatomic) BOOL hasAnchorInfo_p;
@property (nonatomic) BOOL hasHasAnchorInfo_p;
@property (copy, nonatomic) NSString *anchorNotShowReason;
@property (nonatomic) BOOL hasAnchorNotShowReason;
@property (copy, nonatomic) NSString *commerceFilterReason;
@property (nonatomic) BOOL hasCommerceFilterReason;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
