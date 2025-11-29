@class NSString, NSDictionary;

@interface AWEPermissionActionModel : NSObject

@property (nonatomic) BOOL isBlocked;
@property (nonatomic) unsigned long long displayType;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSDictionary *debugInfo;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
