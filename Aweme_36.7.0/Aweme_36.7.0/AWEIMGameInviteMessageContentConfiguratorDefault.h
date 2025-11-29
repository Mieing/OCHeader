@class AWEIMGameInviteMessage, NSString;

@interface AWEIMGameInviteMessageContentConfiguratorDefault : NSObject <AWEIMGameInviteMessageContentConfiguratorProtocol>

@property (retain, nonatomic) AWEIMGameInviteMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleStringWithMessage:(id)a0;

- (id)coverImageUrl;
- (id)detailAttributedString_v1:(id)a0;
- (id)detailAttributedString_v0:(id)a0;
- (id)p_processLimitString:(id)a0 second:(id)a1 withLimit:(double)a2 attributes:(id)a3;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (id)titleString;
- (id)detailAttributedString;

@end
