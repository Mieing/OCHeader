@class NSString;

@interface AWEIMLocalGuidanceEntranceCardMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long groupCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)shouldHideWithCon:(id)a0;
- (void)updateTitle:(id)a0 subTitle:(id)a1 groupCount:(long long)a2;
- (BOOL)supportRefactorCell;
- (id)__displayInfo;
- (void).cxx_destruct;
- (long long)templateType;

@end
