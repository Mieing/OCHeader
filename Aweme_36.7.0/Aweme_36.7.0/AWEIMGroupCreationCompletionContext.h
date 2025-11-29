@class NSDictionary, AWEIMMessage;

@interface AWEIMGroupCreationCompletionContext : NSObject

@property (nonatomic) BOOL needTransferToMessageVC;
@property (nonatomic) BOOL needFloatMode;
@property (copy, nonatomic) id /* block */ willTransferToMessageVCBlock;
@property (retain, nonatomic) NSDictionary *transferExtraInfo;
@property (nonatomic) BOOL noNeedSendGroupShareCommand;
@property (nonatomic) BOOL needSyncMessage;
@property (retain, nonatomic) NSDictionary *syncMessageContent;
@property (retain, nonatomic) AWEIMMessage *syncMessage;
@property (retain, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
