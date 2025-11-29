@class NSString;

@interface AWEDCFeedClickModel : NSObject

@property (nonatomic) double time;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *searchQueryAll;

+ (id)searchQueryClickDictWithClickList:(id)a0;

- (id)initWithAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
