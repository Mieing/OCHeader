@class NSString;
@protocol IESECGoodsFeedImmersiveContainerDelegate;

@interface IESECImmersiveProductCardViewConfig : NSObject

@property (copy, nonatomic) NSString *jsonString;
@property (nonatomic) long long index;
@property (nonatomic) double dataInitTime;
@property (weak, nonatomic) id<IESECGoodsFeedImmersiveContainerDelegate> delegate;

- (void).cxx_destruct;

@end
