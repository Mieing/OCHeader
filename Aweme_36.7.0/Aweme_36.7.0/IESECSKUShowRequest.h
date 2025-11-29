@class UIViewController, IESECSKUDetailContext, NSDictionary, NSNumber, IESECSKUParamsModel;
@protocol IESECSKUServiceProtocol;

@interface IESECSKUShowRequest : NSObject

@property (nonatomic) BOOL enableYataSKU;
@property (retain, nonatomic) NSNumber *goUltimateBuyNum;
@property (retain, nonatomic) IESECSKUParamsModel *paramsModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } showFrame;
@property (retain, nonatomic) IESECSKUDetailContext *nativeContext;
@property (retain, nonatomic) NSDictionary *schemaRawParams;
@property (retain, nonatomic) NSDictionary *schemaCalculatedParams;
@property (retain, nonatomic) NSDictionary *jsbRawParams;
@property (weak, nonatomic) id skuViewDelegate;
@property (weak, nonatomic) id<IESECSKUServiceProtocol> schemaDelegate;
@property (nonatomic) BOOL schemaOptimize;
@property (copy, nonatomic) id /* block */ openCompletion;
@property (nonatomic) double panelContentHeightPercent;
@property (nonatomic) long long ultimateBuyAB;
@property (nonatomic) long long ultimateBuyVersion;
@property (nonatomic) BOOL containerOpt;
@property (weak, nonatomic) UIViewController *sourceVC;
@property (nonatomic) long long ultimateBuyEntrance;
@property (retain, nonatomic) NSDictionary *orderParams;

- (struct CGSize { double x0; double x1; })panelSize;
- (BOOL)goUltimateBuy;
- (void)prehandleData;
- (void)generateParamsModel;
- (void)calculateEnableYataSKU;
- (void)calculateUltimateBuy;
- (void).cxx_destruct;

@end
