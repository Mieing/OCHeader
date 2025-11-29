@class NSString, AWEInnerPushControlModel, NSURL, NSDictionary;

@interface AWEMarketingInnerPushModel : NSObject

@property (copy, nonatomic) NSString *themeColor;
@property (retain, nonatomic) NSURL *fullBgURL;
@property (retain, nonatomic) NSURL *headerIconURL;
@property (copy, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSURL *contentLeftBgURL;
@property (copy, nonatomic) NSString *frontTitleLeft;
@property (copy, nonatomic) NSString *frontTitleRight;
@property (copy, nonatomic) NSString *frontDesc;
@property (copy, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) NSURL *mainTitleIconURL;
@property (copy, nonatomic) NSString *mainDesc;
@property (retain, nonatomic) NSURL *mainDescIconURL;
@property (retain, nonatomic) NSURL *contentRightBgURL;
@property (copy, nonatomic) NSString *rightBtnDesc;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (copy, nonatomic) NSDictionary *businessExtra;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ rightButtonActionBlock;

- (void).cxx_destruct;

@end
