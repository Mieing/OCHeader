@interface HTSLiveContainerLayout : IESLivePBBaseMessage

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int marginLeft;
@property (nonatomic) int marginTop;
@property (nonatomic) int marginBottom;
@property (nonatomic) int marginRight;
@property (nonatomic) int paddingLeft;
@property (nonatomic) int paddingRight;
@property (nonatomic) int paddingBottom;
@property (nonatomic) int paddingTop;

+ (id)descriptor;

@end
