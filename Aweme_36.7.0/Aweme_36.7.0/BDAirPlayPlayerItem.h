@class NSString, NSArray;

@interface BDAirPlayPlayerItem : NSObject

@property (copy, nonatomic) NSString *startDramaId;
@property (copy, nonatomic) NSArray *dramaBeans;
@property (retain, nonatomic) id playControlInfo;
@property (copy, nonatomic) id /* block */ displayViewController;

- (void).cxx_destruct;

@end
