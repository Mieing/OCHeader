@class NSString;

@interface AWEIMRecommendInvitationUserMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (readonly, copy, nonatomic) NSString *hintText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hintTextWithRecommendUsers:(id)a0;
+ (id)__hintTextWithRecommendUsers:(id)a0;
+ (id)identifier;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)getContent;
- (BOOL)supportRefactorCell;
- (void)updateWithMessage:(id)a0;
- (id)getSyncedExtDict;
- (id)supportMessageMenuTypeList;
- (long long)templateType;

@end
