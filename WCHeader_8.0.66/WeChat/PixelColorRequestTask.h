@class NSArray;

@interface PixelColorRequestTask : NSObject

@property (nonatomic) unsigned long long format;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSArray *coordinateList;
@property (nonatomic) struct CGSize { double width; double height; } fromSize;

- (void).cxx_destruct;

@end
