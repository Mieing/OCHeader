@class NSString, NSAttributedString;

@interface AppStandardTextContentMessageViewModel : CommonMessageViewModel

@property (nonatomic) double contentImgWidth;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) unsigned long long contentLayoutType;
@property (readonly, nonatomic) NSString *contentText;
@property (readonly, nonatomic) unsigned long long contentImgCnt;
@property (readonly, nonatomic) BOOL hasSourceView;
@property (readonly, nonatomic) double layoutWidth;

- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calculateLayoutSize;
- (BOOL)isShowSourceView;

@end
