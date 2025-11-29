@class IESLiveThreadSafeMutableArray;

@interface IESLiveGameInteractStickerMessageQueue : NSObject

@property (nonatomic) long long maxCount;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) IESLiveThreadSafeMutableArray *messages;

- (id)getDestroyMessage;
- (void)pushMessage:(id)a0;
- (id)getMessageWithRecordID:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithMaxCount:(long long)a0;

@end
