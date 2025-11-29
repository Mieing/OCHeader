@class NSArray;

@interface AWEIMMessageEmoticonReplyPendantViewModel : NSObject

@property (copy, nonatomic) NSArray *viewModelList;
@property (nonatomic) BOOL shouldWrap;
@property (nonatomic) BOOL isLightCameraMsg;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentPadding;
@property (nonatomic) struct CGSize { double width; double height; } pendantSize;

+ (id)pendantViewModelWithMessage:(id)a0;
+ (id)pendantViewModelWithWithMessage:(id)a0 titleInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 interitemSpacing:(double)a2 lineSpacing:(double)a3;
+ (double)unwrappedMaxWidth;
+ (id)nameAttributedStringWithPropertyItemGroup:(id)a0 conversation:(id)a1 containerSize:(struct CGSize { double x0; double x1; })a2 useWrapColor:(BOOL)a3 viewModel:(id)a4 nameDictionary:(id)a5;

- (void).cxx_destruct;

@end
