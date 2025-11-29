@class NSMutableDictionary;

@interface EditImageLogicController : NSObject

@property (retain, nonatomic) NSMutableDictionary *_editedImageDic;

- (id)init;
- (id)getEditImageAttrWithUrl:(id)a0;
- (id)getEditOriginalImageDataWithUrl:(id)a0;
- (void)modifyEditedImageWithAssetUrl:(id)a0 withImage:(id)a1 withDrawLayer:(id)a2 withEdited:(BOOL)a3 withEditedWidgetStateList:(id)a4;
- (BOOL)clearSavedFiles;
- (id)getEditedString:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
