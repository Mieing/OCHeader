@class WCMomentsPageContext;

@interface WCContentItemViewOptions : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL showsDetail;
@property (nonatomic) struct CGSize { double width; double height; } adjustedMediaSize;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;

- (void).cxx_destruct;

@end
