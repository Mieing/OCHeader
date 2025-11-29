@class NSString, AWEURLModel;

@interface AWEProfileTaskCardItemModel : NSObject

@property (nonatomic) unsigned long long cellType;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) id /* block */ hotJumpAreaAction;
@property (copy, nonatomic) id /* block */ specialIconImageBlock;
@property (copy, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) AWEURLModel *iconURLDark;
@property (nonatomic) BOOL isIconNeedBG;

- (void).cxx_destruct;

@end
