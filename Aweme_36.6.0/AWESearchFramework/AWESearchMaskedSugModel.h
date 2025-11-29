@class NSString, NSMutableArray;

@interface AWESearchMaskedSugModel : NSObject

@property (copy, nonatomic) NSString *imprID;
@property (retain, nonatomic) NSMutableArray *gids;
@property (retain, nonatomic) NSMutableArray *words;

- (void).cxx_destruct;
- (id)init;

@end
