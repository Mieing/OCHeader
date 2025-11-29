@class NSString;

@interface WCFinderLightDarkIconName : NSObject

@property (copy, nonatomic) NSString *lightName;
@property (copy, nonatomic) NSString *darkName;
@property (nonatomic) long long imageFetchType;

+ (id)instanceWithLight:(id)a0 dark:(id)a1;
+ (id)instanceWithSameName:(id)a0;

- (void).cxx_destruct;

@end
