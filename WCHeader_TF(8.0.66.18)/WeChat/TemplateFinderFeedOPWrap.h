@class NSString;

@interface TemplateFinderFeedOPWrap : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *feed_thumbnail;

+ (id)finderFeedOPWrapWithJSON:(id)a0;

- (void).cxx_destruct;

@end
