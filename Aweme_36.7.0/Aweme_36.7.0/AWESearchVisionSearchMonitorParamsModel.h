@class NSNumber, NSString;

@interface AWESearchVisionSearchMonitorParamsModel : NSObject

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *isLoadMore;
@property (copy, nonatomic) NSString *searchNilType;
@property (copy, nonatomic) NSString *searchNilItem;
@property (retain, nonatomic) NSNumber *textType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *openSearchPage;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *imprID;
@property (copy, nonatomic) NSString *tabName;

- (void).cxx_destruct;
- (id)init;

@end
