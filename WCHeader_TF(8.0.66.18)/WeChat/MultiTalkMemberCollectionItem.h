@class MultiTalkMemberCell, NSObject;
@protocol MultiTalkMemberProtocol;

@interface MultiTalkMemberCollectionItem : NSObject

@property (retain, nonatomic) NSObject<MultiTalkMemberProtocol> *member;
@property (retain, nonatomic) MultiTalkMemberCell *memberCell;

- (id)initWithMember:(id)a0 memberCell:(id)a1;
- (void).cxx_destruct;

@end
