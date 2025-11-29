@class IESGCPSKCombinedEventModel;
@protocol IESGCPSKCombinedPluginProtocol;

@interface IESGCPSKCombinedEventNode : NSObject

@property (retain, nonatomic) id<IESGCPSKCombinedPluginProtocol> plugin;
@property (retain, nonatomic) IESGCPSKCombinedEventModel *event;
@property (retain, nonatomic) IESGCPSKCombinedEventNode *next;
@property (nonatomic) BOOL finish;
@property (nonatomic) BOOL doNext;

- (void).cxx_destruct;

@end
