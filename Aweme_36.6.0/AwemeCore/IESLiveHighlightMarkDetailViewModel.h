@class NSArray, NSString, IESLiveHighlightMarkApi, IESLiveHighlightMarkDetailView;

@interface IESLiveHighlightMarkDetailViewModel : NSObject

@property (retain, nonatomic) IESLiveHighlightMarkApi *api;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL noAuth;
@property (copy, nonatomic) NSString *disableToast;
@property (weak, nonatomic) IESLiveHighlightMarkDetailView *view;

- (id)initWithDIContext:(id)a0;
- (void)updateItemsWith:(id)a0;
- (void)fetchHighlightsList;
- (void).cxx_destruct;

@end
