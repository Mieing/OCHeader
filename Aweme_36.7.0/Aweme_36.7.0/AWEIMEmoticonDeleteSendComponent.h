@class NSString, NSHashTable;

@interface AWEIMEmoticonDeleteSendComponent : AWEIMComponentBase <AWEIMEmoticonDeleteSendComponent>

@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) NSHashTable *deleteSendCellSet;
@property (nonatomic) BOOL sendButtonEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)updateWithDeleteSendCollectionViewCell:(id)a0;
- (void).cxx_destruct;

@end
