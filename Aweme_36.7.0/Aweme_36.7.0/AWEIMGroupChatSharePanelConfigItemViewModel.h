@class AWEIMMessageConversation;
@protocol AWEIMGroupChatSharePanelConfigItemCellDelegate;

@interface AWEIMGroupChatSharePanelConfigItemViewModel : NSObject

@property (weak, nonatomic) id<AWEIMGroupChatSharePanelConfigItemCellDelegate> cellDelegate;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) BOOL switchOn;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) BOOL hideLineView;

- (void)configWithCell:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
