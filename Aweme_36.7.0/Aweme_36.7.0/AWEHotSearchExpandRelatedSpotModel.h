@class NSString, NSNumber;

@interface AWEHotSearchExpandRelatedSpotModel : NSObject

@property (copy, nonatomic) NSString *mainHotSpotWordForEntryWord;
@property (copy, nonatomic) NSString *relatedHotSpotWord;
@property (retain, nonatomic) NSNumber *type;
@property (nonatomic) long long videoItemID;

- (void).cxx_destruct;

@end
