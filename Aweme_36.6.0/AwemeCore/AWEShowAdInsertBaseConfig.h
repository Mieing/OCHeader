@class NSString, NSArray, NSDictionary;

@interface AWEShowAdInsertBaseConfig : NSObject

@property (copy, nonatomic) NSString *adScene;
@property (nonatomic) BOOL noNeedInsert;
@property (copy, nonatomic) NSArray *progressPoints;
@property (copy, nonatomic) NSDictionary *requestCustomParams;

- (void).cxx_destruct;

@end
