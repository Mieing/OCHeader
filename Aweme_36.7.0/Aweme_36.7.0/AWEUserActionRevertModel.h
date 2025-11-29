@class NSString, NSIndexPath, NSDictionary;

@interface AWEUserActionRevertModel : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
