@class IESECMarketingPerfModel, NSString, NSDictionary, NSMutableDictionary, UIView, IESECMarketingView, UIViewController;

@interface IESECMarketingManagerBuilder : NSObject

@property (weak, nonatomic) UIViewController *pageVC;
@property (weak, nonatomic) UIView *pageContainer;
@property (retain, nonatomic) id pageData;
@property (copy, nonatomic) NSDictionary *pageExtra;
@property (copy, nonatomic) NSDictionary *pageCommonLog;
@property (copy, nonatomic) id /* block */ customOpenBlock;
@property (copy, nonatomic) NSString *pageId;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (retain, nonatomic) NSMutableDictionary *ritMap;
@property (nonatomic) long long retryCount;
@property (copy, nonatomic) NSString *rit;
@property (copy, nonatomic) NSString *component;
@property (weak, nonatomic) IESECMarketingView *ecMarketingView;
@property (readonly, nonatomic) id /* block */ setPage;
@property (readonly, nonatomic) id /* block */ setPageData;
@property (readonly, nonatomic) id /* block */ setPageContainer;
@property (readonly, nonatomic) id /* block */ setPageParams;
@property (readonly, nonatomic) id /* block */ setPageCustomOpenBlock;
@property (readonly, nonatomic) id /* block */ setBizParams;
@property (readonly, nonatomic) id /* block */ addRitContainer;
@property (readonly, nonatomic) id /* block */ addRitLayoutInfo;
@property (readonly, nonatomic) id /* block */ addRitParams;
@property (retain, nonatomic) IESECMarketingPerfModel *perfModel;

- (id)getAndInsertRitInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
