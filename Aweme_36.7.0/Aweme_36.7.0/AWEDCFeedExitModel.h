@class NSString, NSDictionary;

@interface AWEDCFeedExitModel : NSObject

@property (copy, nonatomic) NSString *exitMethod;
@property (nonatomic) long long exitType;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *nextTabID;

- (void).cxx_destruct;

@end
