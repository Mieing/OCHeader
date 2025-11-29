@class AWESearchCardTextTagComponentModel, NSString, NSDictionary, AWESearchCustomTagComponentModel;

@interface AWESearchCardNicknameComponentModel : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *publishTime;
@property (retain, nonatomic) NSString *authorIntroduction;
@property (retain, nonatomic) AWESearchCardTextTagComponentModel *textTagComponentModel;
@property (retain, nonatomic) AWESearchCustomTagComponentModel *customTagComponentModel;
@property (retain, nonatomic) NSDictionary *logData;

- (void).cxx_destruct;

@end
