@class PAGView, NSMutableDictionary;

@interface WAWebViewPlugin_PagView_Data : NSObject

@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) NSMutableDictionary *imageDic;
@property (copy, nonatomic) id /* block */ pagCompletion;
@property (nonatomic) BOOL hide;

- (void).cxx_destruct;

@end
