@class DelOp_AllContact, DelOp_Contact, DelOp_Msg;

@interface DelOp : WXPBGeneratedMessage

@property (nonatomic) unsigned long long key;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long roamDataVersion;
@property (nonatomic) int type;
@property (retain, nonatomic) DelOp_Msg *msg;
@property (retain, nonatomic) DelOp_Contact *contact;
@property (retain, nonatomic) DelOp_AllContact *allContact;

+ (void)initialize;

@end
