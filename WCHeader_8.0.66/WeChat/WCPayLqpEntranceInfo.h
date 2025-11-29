@class WCPayLqpWordingItem, WCPayLqpJumpInfo;

@interface WCPayLqpEntranceInfo : NSObject

@property BOOL is_exposure;
@property (retain) WCPayLqpJumpInfo *jump_info;
@property (retain) WCPayLqpWordingItem *wording_item;

- (void).cxx_destruct;

@end
