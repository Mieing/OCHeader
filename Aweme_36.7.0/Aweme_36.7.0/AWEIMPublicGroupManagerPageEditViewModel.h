@interface AWEIMPublicGroupManagerPageEditViewModel : NSObject

@property (nonatomic, getter=isEditing) BOOL edit;
@property (readonly, nonatomic) BOOL editChangedByInteraction;
@property (nonatomic) long long exportGroupCount;
@property (readonly, nonatomic) long long editVersion;

- (void)changeEditToByInteraction:(BOOL)a0;
- (void)makeEditVersionPlusOne;
- (void)exitEditModeWithReason:(id)a0;
- (id)init;

@end
