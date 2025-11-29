@interface ACCEditorBottomEntranceViewConfig : NSObject

@property (nonatomic) long long maxTitleLabelWidth;
@property (nonatomic) BOOL supportClose;
@property (nonatomic) BOOL supportCancel;
@property (nonatomic) long long iconTitleGap;
@property (nonatomic) long long iconViewSize;
@property (nonatomic) long long iconCornerRadius;
@property (nonatomic) BOOL enableUIOpt;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) BOOL enableHDRRendering;

- (void).cxx_destruct;
- (id)init;

@end
