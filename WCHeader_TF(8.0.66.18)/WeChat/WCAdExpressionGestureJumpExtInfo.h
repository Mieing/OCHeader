@class NSString, WCAdRandomPickComponentExtInfo, WCAdRandomPickCardExtInfo;

@interface WCAdExpressionGestureJumpExtInfo : NSObject

@property (retain, nonatomic) NSString *candidateTwistCardId;
@property (retain, nonatomic) WCAdRandomPickCardExtInfo *cardExtInfo;
@property (retain, nonatomic) WCAdRandomPickComponentExtInfo *componentExtInfo;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
