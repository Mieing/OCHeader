@class NSArray, NSString, NSDictionary, AWEUserModel, NSNumber;

@interface AWEShowPostViewControllerInterfaceConfig : NSObject

@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) long long initialIndex;
@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) id contextProvider;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *logExtraDict;

- (void).cxx_destruct;

@end
