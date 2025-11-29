@class NSArray;

@interface AWELiveElementConfig : NSObject

@property (nonatomic) BOOL useAdded;
@property (retain, nonatomic) NSArray *deleteElements;
@property (retain, nonatomic) NSArray *addedElements;

+ (id)buildDefaultElementConfig;

- (BOOL)canAddElementBy:(id)a0;
- (void).cxx_destruct;

@end
