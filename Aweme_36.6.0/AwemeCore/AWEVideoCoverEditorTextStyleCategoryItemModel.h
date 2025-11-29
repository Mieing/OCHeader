@class AWEStoryColor;

@interface AWEVideoCoverEditorTextStyleCategoryItemModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) long long alignmentType;
@property (retain, nonatomic) AWEStoryColor *fontColor;
@property (nonatomic) BOOL isSelected;

- (void).cxx_destruct;

@end
