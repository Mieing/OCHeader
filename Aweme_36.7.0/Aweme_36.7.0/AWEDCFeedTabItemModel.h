@class NSString, NSArray, NSDictionary;

@interface AWEDCFeedTabItemModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *pinnedAwemes;
@property (copy, nonatomic) NSDictionary *extraBodyParams;

- (void).cxx_destruct;

@end
