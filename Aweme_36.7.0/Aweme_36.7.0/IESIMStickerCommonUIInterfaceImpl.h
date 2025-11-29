@class NSString;

@interface IESIMStickerCommonUIInterfaceImpl : NSObject <IESIMStickerCommonUIInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)selectionViewDefaultConfig;
- (id)createSelectionViewWithSize:(struct CGSize { double x0; double x1; })a0 config:(id)a1;

@end
