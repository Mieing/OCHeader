@class NSString, AWEIMMessageConversation, NSObject;

@interface AWEIMGroupSpeakPermissionCellModel : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *reuseIdentifier;
@property (readonly, copy, nonatomic) NSObject *bizData;
@property (readonly, copy, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) double cellHeight;

- (id)initWithIdentifier:(id)a0 reuseIdentifier:(id)a1 conversation:(id)a2 bizData:(id)a3;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
