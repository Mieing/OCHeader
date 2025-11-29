@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEPaidStreamIAAPreloadConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *paidEntrance;
@property (copy, nonatomic) NSDictionary *businessExtraParameter;

- (void).cxx_destruct;

@end
