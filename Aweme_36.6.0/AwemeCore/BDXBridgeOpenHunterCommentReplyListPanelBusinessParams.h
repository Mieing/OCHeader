@class NSNumber, NSString;

@interface BDXBridgeOpenHunterCommentReplyListPanelBusinessParams : BDXBridgeModel

@property (retain, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSString *channelObjID;
@property (retain, nonatomic) NSNumber *needForcedShowKeyboardToReply;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
