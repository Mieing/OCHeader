@class NSString, CContact;

@interface MMGroupLiveUserStateItem : MMLiveUserStateItem

@property (retain, nonatomic) NSString *identityId;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) CContact *contact;

- (id)initWithRoomId:(id)a0 identityId:(id)a1;
- (id)userName;
- (id)displayName;
- (id)headImageUrl;
- (void).cxx_destruct;

@end
