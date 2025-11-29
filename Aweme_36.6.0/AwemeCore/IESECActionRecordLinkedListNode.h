@class IESECActionRecordBaseNode;

@interface IESECActionRecordLinkedListNode : NSObject

@property (retain, nonatomic) IESECActionRecordBaseNode *data;
@property (retain, nonatomic) IESECActionRecordLinkedListNode *next;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
