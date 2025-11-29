@protocol IESLiveURLSchemaHandler;

@interface IESLiveGiftImageItem : HTSLiveGiftItem

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;

+ (id)itemFromModel:(id)a0 attachingDIContext:(id)a1;

- (BOOL)isSmallGiftComboSend;
- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (void).cxx_destruct;
- (BOOL)canGroup;
- (BOOL)canSelect;

@end
