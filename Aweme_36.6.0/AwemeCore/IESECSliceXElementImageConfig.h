@class NSString, UIImageView, NSURL, IESECSliceXElementViewContext;

@interface IESECSliceXElementImageConfig : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) IESECSliceXElementViewContext *elementViewContext;
@property (copy, nonatomic) id /* block */ complete;
@property (copy, nonatomic) NSString *customBizTag;
@property (copy, nonatomic) NSString *customSceneTag;
@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isRequestOnly;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
