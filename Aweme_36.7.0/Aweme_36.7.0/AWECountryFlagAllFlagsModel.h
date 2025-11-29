@class NSArray, NSString;

@interface AWECountryFlagAllFlagsModel : NSObject

@property (retain, nonatomic) NSArray *keys;
@property (nonatomic) BOOL isInternal;
@property (retain, nonatomic) NSString *version;

- (id)initWithKeys:(id)a0 isInternal:(BOOL)a1 version:(id)a2;
- (void).cxx_destruct;
- (id)toDictionary;

@end
