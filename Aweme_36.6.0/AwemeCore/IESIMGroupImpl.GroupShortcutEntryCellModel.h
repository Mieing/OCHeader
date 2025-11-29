@class UIImage, NSString;

@interface IESIMGroupImpl.GroupShortcutEntryCellModel : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ lightIconStr;
    void /* unknown type, empty encoding */ darkIconStr;
    void /* function */ title;
    void /* unknown type, empty encoding */ schema;
    void /* unknown type, empty encoding */ guideText;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateIcon;

@end
