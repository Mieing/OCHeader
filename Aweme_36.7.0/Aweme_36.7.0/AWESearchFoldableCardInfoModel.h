@class NSArray, AWESearchFoldableInfoModel, NSDictionary, UIView, AWESearchFoldGradientView;
@protocol CachalotRenderPipelineComponentViewModel, AWESearchFoldGradientProtocol;

@interface AWESearchFoldableCardInfoModel : NSObject <NSCopying>

@property (nonatomic) BOOL enableFold;
@property (nonatomic) BOOL isFromClickShowButton;
@property (nonatomic) double foldableY;
@property (retain, nonatomic) AWESearchFoldableInfoModel *foldableData;
@property (copy, nonatomic) NSArray *foldChildren;
@property (copy, nonatomic) NSArray *delChildren;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> lastfoldInsertAnchor;
@property (nonatomic) long long lastfoldInsertAnchorIndex;
@property (copy, nonatomic) NSDictionary *trackLog;
@property (retain, nonatomic) UIView<AWESearchFoldGradientProtocol> *foldGradientIconView;
@property (retain, nonatomic) AWESearchFoldGradientView *foldGradientView;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
