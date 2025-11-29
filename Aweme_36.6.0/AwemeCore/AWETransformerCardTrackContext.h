@class NSString;

@interface AWETransformerCardTrackContext : NSObject

@property (copy, nonatomic) NSString *cardElementID;
@property (nonatomic) double elementCreatedCount;
@property (nonatomic) double viewCreatedCount;
@property (nonatomic) double cardLayoutCount;
@property (nonatomic) double cardUpdateLayoutCount;
@property (nonatomic) double cardElementRenderTs;

- (void).cxx_destruct;

@end
