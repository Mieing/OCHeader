@class NSString, IESECMallCategoryTabInfoModel;

@interface AWEECMallCategoryMarketingOperation : NSObject

@property (copy, nonatomic) NSString *tabID;
@property (retain, nonatomic) IESECMallCategoryTabInfoModel *tabInfoModel;
@property (copy, nonatomic) id /* block */ handleCallback;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (copy, nonatomic) id /* block */ completed;

- (void).cxx_destruct;

@end
