@class NSString, NSDictionary, NSDate;

@interface RTVIMCmdLongConnectionMessage : NSObject <AWERTVIMCommand>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, copy, nonatomic) NSDictionary *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 type:(long long)a1 conversationID:(id)a2 createdAt:(id)a3 content:(id)a4;
- (void).cxx_destruct;

@end
