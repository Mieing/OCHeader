@class NSString, NSNumber;

@interface AWEIMLynxDynamicCardMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) NSString *lynxURL;
@property (retain, nonatomic) NSString *fallbackURL;
@property (retain, nonatomic) NSString *hint;
@property (retain, nonatomic) NSString *pushDetail;
@property (nonatomic) long long containerType;
@property (retain, nonatomic) NSNumber *updatedWidth;
@property (retain, nonatomic) NSNumber *updatedHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)currentVersionSupportType:(long long)a0;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)shouldShowNicknameWithMessageType;
- (struct CGSize { double x0; double x1; })getCurrentContentSize;
- (id)supportMessageMenuTypeList;
- (long long)messageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
