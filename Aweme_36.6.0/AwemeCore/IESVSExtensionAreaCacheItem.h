@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESVSExtensionAreaCacheItem : NSObject

@property (copy, nonatomic) NSString *episodeID;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *extensionArea;

- (void).cxx_destruct;

@end
