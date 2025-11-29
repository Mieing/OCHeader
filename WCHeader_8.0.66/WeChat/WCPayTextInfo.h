@class NSString, WCPayJumpInfo;

@interface WCPayTextInfo : NSObject

@property (retain) NSString *wording;
@property (retain) WCPayJumpInfo *jump_info;

+ (id)genFromUnion:(id)a0;

- (void).cxx_destruct;

@end
