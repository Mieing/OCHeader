@class IESECSKUSizeAssistantComponent, IESECSKUSpecViewModel, IESECSKUCarAdaptViewModel;

@interface IESECSKUNewHeaderViewModel : NSObject

@property (retain, nonatomic) IESECSKUSpecViewModel *specViewModel;
@property (retain, nonatomic) IESECSKUSizeAssistantComponent *sizeAssistant;
@property (retain, nonatomic) IESECSKUCarAdaptViewModel *carAdapterViewModel;
@property (nonatomic) long long specImageType;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) long long index;

- (void).cxx_destruct;

@end
