@class NSString;

@interface AWESearchCachalotHarmfulModel : NSObject

@property (nonatomic) BOOL isHarmfulSpeech;
@property (retain, nonatomic) NSString *fullString;
@property (retain, nonatomic) NSString *linkString;
@property (retain, nonatomic) NSString *linkURL;

+ (id)modelWithNilInfo:(id)a0 nilText:(id)a1;

- (void).cxx_destruct;

@end
