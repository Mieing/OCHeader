@class NSString, NSNumber, NSArray;

@interface BDARifleAdInfoParams : NSObject

@property (copy, nonatomic) NSString *adID;
@property (retain, nonatomic) NSNumber *adType;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSArray *trackUrlList;
@property (copy, nonatomic) NSString *SKANParameters;

+ (id)adInfoParamsWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
