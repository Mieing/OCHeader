@class NSString, AWEURLModel;

@interface AWECreateSubAccountViewConfig : NSObject

@property (nonatomic) double headerHeight;
@property (nonatomic) double bottomOffset;
@property (retain, nonatomic) AWEURLModel *avatarUrlModel;
@property (copy, nonatomic) NSString *titleContent;
@property (copy, nonatomic) NSString *subTitleContent;
@property (nonatomic) double btnTop;
@property (nonatomic) double btnDistance;
@property (nonatomic) double btnLeft;
@property (copy, nonatomic) NSString *addBtnContent;
@property (copy, nonatomic) NSString *createBtnContent;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long viewStyle;

- (void).cxx_destruct;
- (id)initWithViewStyle:(long long)a0;

@end
