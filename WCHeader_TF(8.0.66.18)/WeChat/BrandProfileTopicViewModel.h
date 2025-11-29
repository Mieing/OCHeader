@class NSArray;

@interface BrandProfileTopicViewModel : NSObject {
    double _foldViewHeight;
    double _unfoldViewHeight;
}

@property (nonatomic) BOOL isUnfold;
@property (nonatomic) BOOL hasUnfoldButton;
@property (readonly, nonatomic) BOOL hasMultiLines;
@property (readonly, nonatomic) double unfoldButtonCenterY;
@property (readonly, nonatomic) NSArray *topicInfoList;
@property (readonly, nonatomic) double viewHeight;

+ (id)generateTopicAttrStr:(id)a0 containerWidth:(double)a1;
+ (id)generateTopicButton;

- (id)init;
- (void)setTopicInfoList:(id)a0;
- (void)updateHasUnfoldButton;
- (void)fillTopicButtonFoldInfo;
- (double)topicButtonMaxWidth;
- (double)topicButtonFillThresholdWidth;
- (void).cxx_destruct;

@end
