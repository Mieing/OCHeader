@class NSString, NSArray;

@interface IESIMExternalRefMateApplyInfo : NSObject

@property (copy, nonatomic) NSString *refTitle;
@property (copy, nonatomic) NSArray *applyMessages;
@property (copy, nonatomic) NSString *applyUid;
@property (copy, nonatomic) NSString *applyUserName;
@property (copy, nonatomic) NSString *senderMention;
@property (copy, nonatomic) NSString *receiverMention;
@property (copy, nonatomic) NSString *shareMergeMention;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
