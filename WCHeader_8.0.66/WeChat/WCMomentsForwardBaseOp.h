@class WCDataItem, NSString, WCMediaItem, CMessageWrap, ForwardMessageLogicController;
@protocol WCMomentsForwardBaseOpDelegate;

@interface WCMomentsForwardBaseOp : MMObject <ForwardMessageLogicDelegate>

@property (retain, nonatomic) NSString *forwardMessageLogicReportUserInfo;
@property (weak, nonatomic) id<WCMomentsForwardBaseOpDelegate> delegate;
@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) CMessageWrap *messageWrap;
@property (readonly, nonatomic) ForwardMessageLogicController *forwardMsgLogic;
@property (nonatomic) BOOL isToCustomContact;
@property (nonatomic) long long browseScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 mediaItem:(id)a1;
- (void)dealloc;
- (BOOL)startForwardToCustomContact:(id)a0;
- (id)genMesssageWrap;
- (id)getToContacts;
- (id)mediaItemDescription;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void).cxx_destruct;

@end
