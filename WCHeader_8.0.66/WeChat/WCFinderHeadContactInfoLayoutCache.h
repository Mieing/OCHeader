@class NSMapTable, UIFont;

@interface WCFinderHeadContactInfoLayoutCache : NSObject

@property (retain, nonatomic) NSMapTable *otherViewLayoutTable;
@property (nonatomic) unsigned long long currentShowLineType;
@property (nonatomic) BOOL hasChangeFontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nicknameRect;
@property (retain, nonatomic) UIFont *nameFont;
@property (nonatomic) unsigned long long lineNumber;
@property (nonatomic) BOOL lineBreakByClipping;

+ (id)cacheWithNameTextView:(id)a0 otherViews:(id)a1;

- (id)init;
- (void)cacheWithNameTextView:(id)a0 otherViews:(id)a1;
- (void)recoverWithNameTextView:(id)a0 otherViews:(id)a1;
- (void).cxx_destruct;

@end
