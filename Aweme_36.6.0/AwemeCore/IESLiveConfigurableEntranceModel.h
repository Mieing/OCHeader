@class NSDictionary, IESHYHybridContainerConfig;

@interface IESLiveConfigurableEntranceModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (copy, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) IESHYHybridContainerConfig *config;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)init;

@end
