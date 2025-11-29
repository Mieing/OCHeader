@class NSArray, NSString, UIBezierPath, NSAttributedString;

@interface DanceUI.AccessibilityNode : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ children;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ viewRendererHost;
    void /* unknown type, empty encoding */ oldAttachmentForNotification;
    void /* unknown type, empty encoding */ attachmentsStorage;
    void /* unknown type, empty encoding */ cachedCombinedAttachment;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ needsUpdatePath;
    void /* unknown type, empty encoding */ needsGlobalFrameUpdate;
    void /* unknown type, empty encoding */ focusableAncestor;
    void /* unknown type, empty encoding */ relationshipScope;
}

@property (nonatomic, readonly) NSArray *danceUI_accessibilityUserDefinedLinkedUIElements;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedHint;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;
@property (nonatomic, copy) NSString *accessibilityLanguage;
@property (nonatomic) BOOL accessibilityElementsHidden;
@property (nonatomic) BOOL accessibilityViewIsModal;
@property (nonatomic) BOOL shouldGroupAccessibilityChildren;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSArray *accessibilityAttributedUserInputLabels;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) long long accessibilityContainerType;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) NSString *description;

- (double)danceUI_accessibilityMaxValue;
- (double)danceUI_accessibilityMinValue;
- (BOOL)danceUI_accessibilityScrollToVisible;
- (id)danceUI_accessibilityRoleDescription;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)accessibilityActivate;
- (long long)accessibilityElementCount;
- (BOOL)_internal_handleCustomActionWithUiAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)accessibilityURL;

@end
