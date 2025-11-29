@class NSArray;

@interface AWEIMFastReplyListEditViewModel : NSObject

@property (retain, nonatomic) NSArray *dataSourceArray;
@property (nonatomic) BOOL isRequesting;
@property (readonly, nonatomic) BOOL isEdited;

- (id)initWithReplyTextArray:(id)a0;
- (void)eventTrack4ShowAction;
- (id)itemModelWithIndex:(unsigned long long)a0;
- (void)addEditListItem;
- (void)removeEditListItem:(id)a0;
- (id)replyTextArrayByJsonString;
- (void)saveEditListItems:(id /* block */)a0;
- (void)eventTrack4SaveAction;
- (id)replyTextArray;
- (void).cxx_destruct;

@end
