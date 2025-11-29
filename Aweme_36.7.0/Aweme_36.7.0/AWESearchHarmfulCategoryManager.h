@class NSString;

@interface AWESearchHarmfulCategoryManager : NSObject

@property (nonatomic) BOOL isHarmfulSpeech;
@property (retain, nonatomic) NSString *fullString;
@property (retain, nonatomic) NSString *linkString;
@property (retain, nonatomic) NSString *linkURL;

- (BOOL)checkHarmfulCategory:(BOOL)a0 nilTextModel:(id)a1;
- (void).cxx_destruct;

@end
