@class NSString, NSMutableArray;

@interface AbstractRingToneSubDetail : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *authorDesc;
@property (copy, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSMutableArray *searchHitWords;
@property (copy, nonatomic) NSString *outsideTitle;

- (void).cxx_destruct;

@end
