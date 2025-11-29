@class NSArray;

@interface VEExtractFrameDriver : NSObject

@property (readonly, nonatomic) long long strategy;
@property (readonly, copy, nonatomic) NSArray *disableFeatures;
@property (copy, nonatomic) id /* block */ receiveFrame;

- (id)init:(long long)a0 disableFeatures:(id)a1;
- (void).cxx_destruct;

@end
