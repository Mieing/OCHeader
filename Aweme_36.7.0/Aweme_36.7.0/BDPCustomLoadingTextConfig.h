@class BDPCustomLoadingTextStyle, NSString, NSArray, NSNumber;

@interface BDPCustomLoadingTextConfig : NSObject

@property (copy, nonatomic) NSString *firstStartText;
@property (copy, nonatomic) NSArray *downloadingText;
@property (copy, nonatomic) NSString *compilingText;
@property (copy, nonatomic) NSString *iText;
@property (copy, nonatomic) NSString *completeText;
@property (retain, nonatomic) NSNumber *textDuration;
@property (retain, nonatomic) BDPCustomLoadingTextStyle *style;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
