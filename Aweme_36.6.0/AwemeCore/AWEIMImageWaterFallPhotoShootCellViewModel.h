@class AWEIMMessageConversation, AWEIMMixImageMessage, NSDictionary, AWEIMImageWaterFallItemUIConfig, NSString;

@interface AWEIMImageWaterFallPhotoShootCellViewModel : NSObject <AWEIMImageWaterFallItemProtocol>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMMixImageMessage *mixImageMessage;
@property (copy, nonatomic) id /* block */ transferToShootBlock;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (copy, nonatomic) id /* block */ shootTrackBlock;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEIMImageWaterFallItemUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)tapActionBlock;
- (void)p_configWithWithConv:(id)a0 mixImageMessage:(id)a1 trackExtra:(id)a2;
- (void)p_transferToShootWithConv:(id)a0 mixImageMessage:(id)a1;
- (id)p_transferToStartMixPageSchema;
- (BOOL)shouldDismissPreviousPage;
- (id)initWithConv:(id)a0 mixImageMessage:(id)a1 trackExtra:(id)a2;
- (void).cxx_destruct;
- (id)text;
- (id)iconImageName;

@end
