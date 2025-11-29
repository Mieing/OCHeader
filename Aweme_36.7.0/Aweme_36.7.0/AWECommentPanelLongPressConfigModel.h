@class NSArray;

@interface AWECommentPanelLongPressConfigModel : NSObject

@property (nonatomic) BOOL isNeedUGComponent;
@property (nonatomic) BOOL isNeedIMComponent;
@property (nonatomic) BOOL isApplyCustomCommentElements;
@property (copy, nonatomic) NSArray *customCommentElementList;
@property (copy, nonatomic) NSArray *dynamicCumtomCommentElementList;

- (void).cxx_destruct;

@end
