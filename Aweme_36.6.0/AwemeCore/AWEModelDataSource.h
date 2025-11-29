@class NSArray, NSString;

@interface AWEModelDataSource : NSObject

@property (copy) NSArray *models;
@property (nonatomic) long long fromIndex;
@property (retain, nonatomic) NSString *referString;

- (void).cxx_destruct;

@end
