@class NSString, NSNumber;

@interface AWESpecialCardHotFeedControlBusinessModel : NSObject

@property (copy, nonatomic) NSString *businessID;
@property (retain, nonatomic) NSNumber *vvLimit;
@property (retain, nonatomic) NSNumber *timeHoursLimit;

- (void)configWithDictionary:(id)a0 businessID:(id)a1;
- (void).cxx_destruct;

@end
