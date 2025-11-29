@class NSString, NSMutableDictionary;

@interface WCFinderIntentItem : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) NSString *currIntentHash;
@property (retain, nonatomic) NSString *prevIntentHash;

- (id)init;
- (id)info;
- (void).cxx_destruct;

@end
