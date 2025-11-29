@class NSString;

@interface WCFinderCollectionHalfViewDisplayInfo : NSObject

@property (copy, nonatomic) NSString *navTitle;
@property (copy, nonatomic) NSString *displayTitle;
@property (copy, nonatomic) NSString *displayEpisodeContent;
@property (nonatomic) BOOL showCollectionDesc;
@property (copy, nonatomic) NSString *displayDescContent;
@property (copy, nonatomic) NSString *reportURL;

+ (id)displayInfoWithCollecitonInfo:(id)a0;
+ (id)displayInfoWithPaidCollection:(id)a0;

- (void).cxx_destruct;

@end
