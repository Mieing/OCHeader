@class AWEShowAdInsertBaseConfig, NSString;

@interface AWEShowAdInsertToolIntercept : NSObject

@property (retain, nonatomic) AWEShowAdInsertBaseConfig *config;
@property (copy, nonatomic) NSString *interceptReason;

- (id)initWithInsertConfig:(id)a0;
- (BOOL)checkShouldRequestWithModel:(id)a0 dataArray:(id)a1 tableView:(id)a2 currentIndex:(long long)a3;
- (void).cxx_destruct;

@end
