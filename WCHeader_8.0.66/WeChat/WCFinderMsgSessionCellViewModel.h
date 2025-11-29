@class WCFinderMsgSessionInfo, WCFinderMsgSessionCell;

@interface WCFinderMsgSessionCellViewModel : NSObject

@property (weak, nonatomic) WCFinderMsgSessionCell *cell;
@property (retain, nonatomic) WCFinderMsgSessionInfo *sessionInfo;

- (void)updateCellView;
- (void)updateCellData;
- (id)realChatFinderContact;
- (id)sessionTitle;
- (void).cxx_destruct;

@end
