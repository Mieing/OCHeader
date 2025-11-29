@class NSString, NSArray, NSDictionary;

@interface AWESearchAIGCHotspotTipsViewModel : NSObject

@property (copy, nonatomic) NSString *mode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *cellModelList;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL isLast;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
