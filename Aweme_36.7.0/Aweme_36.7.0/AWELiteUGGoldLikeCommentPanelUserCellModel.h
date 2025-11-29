@class NSString, AWEUserModel;

@interface AWELiteUGGoldLikeCommentPanelUserCellModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isInsert;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *giftDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
