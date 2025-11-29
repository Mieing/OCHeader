@class NSString, FinderCollectionInfo;

@interface WCFinderProfileCollectionListLayoutItem : NSObject

@property (retain, nonatomic) FinderCollectionInfo *userInfo;
@property (retain, nonatomic) NSString *displayText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;

@end
