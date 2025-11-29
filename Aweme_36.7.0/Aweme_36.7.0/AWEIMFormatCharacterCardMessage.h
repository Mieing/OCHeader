@class NSString, NSArray, AWEURLModel;

@interface AWEIMFormatCharacterCardMessage : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMFormatCharacterCardMessageProtocol>

@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEURLModel *avatarUrl;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *tagsArray;
@property (copy, nonatomic) NSArray *tagModelsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (void).cxx_destruct;
- (long long)templateType;

@end
