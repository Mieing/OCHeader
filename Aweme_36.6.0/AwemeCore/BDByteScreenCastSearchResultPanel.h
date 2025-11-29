@class NSString, NSMutableArray;

@interface BDByteScreenCastSearchResultPanel : NSObject

@property (nonatomic) unsigned long long result;
@property (nonatomic) unsigned long long network;
@property (copy, nonatomic) NSString *firstTitle;
@property (copy, nonatomic) NSString *secondTitle;
@property (retain, nonatomic) NSMutableArray *banners;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
