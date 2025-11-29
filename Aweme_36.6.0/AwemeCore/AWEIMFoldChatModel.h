@class NSString, NSArray, AWEURLModel;

@interface AWEIMFoldChatModel : AWEBaseApiModel <AWEIMMultiSelectPopupItemProtocol>

@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *groupIcon;
@property (nonatomic) long long groupMemberCount;
@property (nonatomic) long long creatorUid;
@property (nonatomic) long long ownerUid;
@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long itemID;
@property (copy, nonatomic) NSString *descText;
@property (retain, nonatomic) AWEURLModel *imageUrlModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
